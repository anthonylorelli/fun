# Menu Maker
import json
import sys

if len(sys.argv) != 2:
    print("Usage: mmaker.py <recipe file>\n")
    exit()

f = open(sys.argv[1])
recipes = json.load(f)
print(recipes)
