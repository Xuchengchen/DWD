import json

genres = set()
# tags = set()

with open('fringe-fake-data.json') as file:
    fringe = json.load(file)
    print(len(fringe))
    for show in fringe:
        genres.add((show["genre"],show["genre_tags"]))
        # if show["genre_tags"] != None:
        #     for i in show["genre_tags"].split(","):
        #         tags.add(i)


# print(genres[0]+","+genres[1])
# print("=======================")


for item in genres:
    if item[1] == None:
        continue
    else:
        # print(item[1].split(","))
        for x in item[1].split(","):
            print(item[0]+","+x)
        # if len(item[1]) > 1:
        #     print(item[1])
        #     for x in item:
        #         print(x)
        #         print(item[0]+","+x)
        # else:
        #     print(item[1])
        #     print(item[0]+","+item[1])


#     print(item)
# print("=======================")
# print("tags")
# print("=======================")
# for item in tags:
#     print(item)