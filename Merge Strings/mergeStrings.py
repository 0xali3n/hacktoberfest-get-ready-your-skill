# Created by: Ky Duong
# Hacktoberfest 2022
# Environment: Python 3.10.7 via PyCharm
# Language: Python
# Github: https://github.com/inorishizuka

# Create Your Strings

string1 ="Hello,"
string2 ="Welcome to Hacktoberfest 2022"

# Print Strings, while this looks proper with the output "Hello, Welcome to Hacktoberfest 2022" these are still unmerged and seperate strings

print(string1,string2)

# How about we try to combine them?

newString = string1 + string2

# Now print the results, looks a little weird? that's because the strings concatenated at the end of each other, or added to the ends of each other resulting in "Hello,Welcome to Hacktoberfest 2022"

print(newString)

# Lets fix this with a little space insertion

finalString = string1 + " " + string2

# And here we have what looks like the original intended output "Hello, Welcome to Hacktoberfest 2022"

print(finalString)

# Thank you for reading, wish you the best on your journeys
