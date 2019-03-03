import json

genres = set()
tags = set()

with open('fringe-fake-data.json') as file:
    fringe = json.load(file)
    for show in fringe:
        genres.add(show["genre"])
        if show["genre_tags"] != None:
            for i in show["genre_tags"].split(","):
                tags.add(i)

print("genres")
print("=======================")
for item in genres:
    print(item)
print("=======================")
print("tags")
print("=======================")
for item in tags:
    print(item)