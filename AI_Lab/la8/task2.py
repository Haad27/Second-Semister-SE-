import pandas as pd

# Sample datasets
df1 = pd.DataFrame({
    'Country': ['Germany', 'France', 'Brazil', 'Germany'],
    'Year': [2021, 2021, 2021, 2021],
    'GDP': [4.2, 2.9, 1.4, 4.2]
})

df2 = pd.DataFrame({
    'Country': ['Germany', 'France', 'Brazil'],
    'Year': [2021, 2021, 2021],
    'Population': [83, 67, 213]
})

# merge using multiple key columns
merged_df = pd.merge(df1, df2)
print(merged_df)
print()

# remove duplicates
print("removed duplicates: ")
merged_df = merged_df.drop_duplicates()
print(merged_df)
