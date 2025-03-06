class Recipe:
    # //making methods in class
    def __init__(self):
        self.__secret_ingredient = "Magic Spice"
    
    def get_ingredient(self):
        return "The ingredient is hidden!"
    
    def set_ingredient(self, new_ingredient):
        print("You cannot change the secret ingredient!")

# calling class
secret_recipe = Recipe()

print(secret_recipe.get_ingredient())

secret_recipe.set_ingredient("Salt")

