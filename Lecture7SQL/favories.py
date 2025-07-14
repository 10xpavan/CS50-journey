import csv

# Open CSV file
with open("b:/notes/CS50x/CS50-journey/Lecture7SQL/favorites.csv", "r") as file:

    # Create reader
    reader = csv.reader(file)

    # Skip header row
    next(reader)

    # Iterate over CSV file, printing each favorite
    for row in reader:
        print(row[1])