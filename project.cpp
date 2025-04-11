#include <iostream>
#include <vector>
#include <string>
#include <memory>

using namespace std;

// Mood class
class Mood {
private:
    string state;

public:
    Mood() : state("neutral") {}

    void updateMood(const string& event) {
        if (event.find("cleaned") != string::npos) state = "happy";
        else if (event.find("mess") != string::npos) state = "annoyed";
        else if (event.find("party") != string::npos) state = "excited";
        else state = "neutral";
    }

    void setMood(const string& newState) {
        state = newState;
    }

    string getMood() const {
        return state;
    }
};

// Memory log class
class MemoryLog {
private:
    vector<string> logs;

public:
    void remember(const string& event) {
        logs.push_back(event);
        if (logs.size() > 5) logs.erase(logs.begin());
    }

    void printRecentLogs() const {
        cout << "Recent memory logs:\n";
        for (const auto& log : logs) {
            cout << "- " << log << "\n";
        }
    }
};

// Observer Interface
class EventObserver {
public:
    virtual void onEvent(const string& event) = 0;
    virtual ~EventObserver() = default;
};

// Base Roommate class
class Roommate : public EventObserver {
protected:
    string name;
    Mood mood;
    MemoryLog memory;

public:
    Roommate(const string& name) : name(name) {}

    virtual void onEvent(const string& event) override {
        cout << name << " noticed: " << event << "\n";
        memory.remember(event);
        mood.updateMood(event);
        reactToEvent(event);
    }

    virtual void reactToEvent(const string& event) {
        cout << name << " feels " << mood.getMood() << "\n";
    }

    virtual void talk() const {
        cout << name << " says: I'm feeling " << mood.getMood() << " today.\n";
    }

    virtual ~Roommate() = default;
};

// Chill Roommate
class ChillRoommate : public Roommate {
public:
    ChillRoommate(const string& name) : Roommate(name) {}

    void reactToEvent(const string& event) override {
        if (event.find("mess") != string::npos) mood.setMood("whatever");
        else if (event.find("party") != string::npos) mood.setMood("cool");
        cout << name << " (chill): Meh, it's all good. Mood: " << mood.getMood() << "\n";
    }
};

// Neat Freak Roommate
class NeatFreakRoommate : public Roommate {
public:
    NeatFreakRoommate(const string& name) : Roommate(name) {}

    void reactToEvent(const string& event) override {
        if (event.find("mess") != string::npos) mood.setMood("furious");
        else if (event.find("cleaned") != string::npos) mood.setMood("satisfied");
        cout << name << " (neat freak): Cleanliness is life. Mood: " << mood.getMood() << "\n";
    }
};

// Party Lover Roommate
class PartyLoverRoommate : public Roommate {
public:
    PartyLoverRoommate(const string& name) : Roommate(name) {}

    void reactToEvent(const string& event) override {
        if (event.find("party") != string::npos) mood.setMood("hyped");
        else if (event.find("quiet") != string::npos) mood.setMood("bored");
        cout << name << " (party lover): Let’s gooo! Mood: " << mood.getMood() << "\n";
    }
};

// Room class to trigger events
class Room {
private:
    vector<shared_ptr<Roommate>> roommates;

public:
    void addRoommate(shared_ptr<Roommate> roommate) {
        roommates.push_back(roommate);
    }

    void triggerEvent(const string& event) {
        cout << "\n📢 Event: " << event << "\n";
        for (const auto& rm : roommates) {
            rm->onEvent(event);
        }
    }

    void finalMoods() const {
        cout << "\n--- Final Moods ---\n";
        for (const auto& rm : roommates) {
            rm->talk();
        }
    }
};

// Main function to test
int main() {
    Room room;

    shared_ptr<Roommate> alex = make_shared<ChillRoommate>("Alex");
    shared_ptr<Roommate> sam = make_shared<NeatFreakRoommate>("Sam");
    shared_ptr<Roommate> jess = make_shared<PartyLoverRoommate>("Jess");

    room.addRoommate(alex);
    room.addRoommate(sam);
    room.addRoommate(jess);

    vector<string> events = {
        "You made a mess in the kitchen",
        "You cleaned the bathroom",
        "You threw a party last night",
        "You stayed quiet all weekend"
    };

    for (const auto& event : events) {
        room.triggerEvent(event);
    }

    room.finalMoods();

    return 0;
}
