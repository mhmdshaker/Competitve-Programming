D={}

#L=["2022-10-29","fdldlfdf"]
def find(L,nbOfPpl):
    findD={}
    for date in L:
        findD["date."+date]=False
    findD["sleeps"]=nbOfPpl
    return findD






#y-m-d
m=12
d=0
y=str(2022)
for i in range(31):
    d+=1
    D[y+"-"+str(m)+"-"+str(d)]="False"

y=str(2023)
m=1
d=0
i=0
for i in range(372):
    d+=1
    if d==32:
        d=1
        m+=1
    D[y+"-"+str(m)+"-"+str(d)]="False"

#feb:
D.pop("2023-2-29")
D.pop("2023-2-30")
D.pop("2023-2-31")
#april:
D.pop("2023-4-31")
#june:
D.pop("2023-6-31")
#september:
D.pop("2023-9-31")
#november:
D.pop("2023-11-31")

rooms=[
        {"roomtype":"Single","area":"40","sleeps":"1","bedtype":"1 Single", "features":{"Smoking":"false","Pool Access":"false", "Breakfast":"true","Lunch":"true","Wifi":"true"},"date":{},"price":"800","image":"{{ url_for('static',filename='styles/h1.jpg') }}",},
        {"roomtype":"Single","area":"40","sleeps":"1","bedtype":"1 Single", "features":{"Smoking":"false","Pool Access":"false", "Breakfast":"true","Lunch":"true","Wifi":"true"},"date":{},"price":"800","image":"{{ url_for('static',filename='styles/h1.jpg') }}",},
        {"roomtype":"Single","area":"40","sleeps":"1","bedtype":"1 Single", "features":{"Smoking":"false","Pool Access":"false", "Breakfast":"true","Lunch":"true","Wifi":"true"},"date":{},"price":"800","image":"{{ url_for('static',filename='styles/h1.jpg') }}",},
        {"roomtype":"Double","area":"45","sleeps":"2","bedtype":"1 Double", "features":{"Smoking":"false","Pool Access":"false", "Breakfast":"true","Lunch":"true","Wifi":"true",},"date":{},"price":"850","image":"{{ url_for('static',filename='styles/r1.jpg') }}",},
        {"roomtype":"Double","area":"45","sleeps":"2","bedtype":"1 Double", "features":{"Smoking":"false","Pool Access":"false", "Breakfast":"true","Lunch":"true","Wifi":"true",},"date":{},"price":"850","image":"{{ url_for('static',filename='styles/r1.jpg') }}",},
        {"roomtype":"Double","area":"45","sleeps":"2","bedtype":"1 Double", "features":{"Smoking":"false","Pool Access":"false", "Breakfast":"true","Lunch":"true","Wifi":"true",},"date":{},"price":"850","image":"{{ url_for('static',filename='styles/r1.jpg') }}",},
        {"roomtype":"Standard","area":"45","sleeps":"2","bedtype":"1 Double, 1 Single", "features":{"Smoking":"false","Pool Access":"false", "Breakfast":"true","Lunch":"true","Wifi":"true",},"date":{},"price":"1000","image":"{{ url_for('static',filename='styles/r4.jpg') }}",},
        {"roomtype":"Standard","area":"45","sleeps":"2","bedtype":"1 Double, 1 Single", "features":{"Smoking":"false","Pool Access":"false", "Breakfast":"true","Lunch":"true","Wifi":"true",},"date":{},"price":"1000","image":"{{ url_for('static',filename='styles/r4.jpg') }}",},
        {"roomtype":"Standard","area":"45","sleeps":"2","bedtype":"1 Double, 1 Single", "features":{"Smoking":"false","Pool Access":"false", "Breakfast":"true","Lunch":"true","Wifi":"true",},"date":{},"price":"1000","image":"{{ url_for('static',filename='styles/r4.jpg') }}",},
        {"roomtype":"Triple","area":"65","sleeps":"3","bedtype":"3 Single", "features":{"Smoking":"false","Pool Access":"false", "Breakfast":"true","Lunch":"true","Wifi":"true",},"date":{},"price":"1300","image":"{{ url_for('static',filename='styles/r7.jpg') }}",},
        {"roomtype":"Triple","area":"65","sleeps":"3","bedtype":"3 Single", "features":{"Smoking":"false","Pool Access":"false", "Breakfast":"true","Lunch":"true","Wifi":"true",},"date":{},"price":"1300","image":"{{ url_for('static',filename='styles/r7.jpg') }}",},
        {"roomtype":"Triple","area":"65","sleeps":"3","bedtype":"3 Single", "features":{"Smoking":"false","Pool Access":"false", "Breakfast":"true","Lunch":"true","Wifi":"true",},"date":{},"price":"1300","image":"{{ url_for('static',filename='styles/r7.jpg') }}",},
        {"roomtype":"Quad","area":"85","sleeps":"4","bedtype":"4 Single", "features":{"Smoking":"false","Pool Access":"false", "Breakfast":"true","Lunch":"true","Wifi":"true",},"date":{},"price":"2000","image":"{{ url_for('static',filename='styles/quad.jpg') }}",},
        {"roomtype":"Quad","area":"85","sleeps":"4","bedtype":"4 Single", "features":{"Smoking":"false","Pool Access":"false", "Breakfast":"true","Lunch":"true","Wifi":"true",},"date":{},"price":"2000","image":"{{ url_for('static',filename='styles/quad.jpg') }}",},
        {"roomtype":"Quad","area":"85","sleeps":"4","bedtype":"4 Single", "features":{"Smoking":"false","Pool Access":"false", "Breakfast":"true","Lunch":"true","Wifi":"true",},"date":{},"price":"2000","image":"{{ url_for('static',filename='styles/quad.jpg') }}",},
        {"roomtype":"Executive Suite","area":"100","sleeps":"4","bedtype":"2 Double", "features":{"Smoking":"true","Pool Access":"true", "Breakfast":"true","Lunch":"true","Wifi":"true",},"date":{},"price":"1200","image":"{{ url_for('static',filename='styles/r3.jpg') }}",},
        {"roomtype":"Executive Suite","area":"100","sleeps":"4","bedtype":"2 Double", "features":{"Smoking":"true","Pool Access":"true", "Breakfast":"true","Lunch":"true","Wifi":"true",},"date":{},"price":"1200","image":"{{ url_for('static',filename='styles/r3.jpg') }}",},
        {"roomtype":"Executive Suite","area":"100","sleeps":"4","bedtype":"2 Double", "features":{"Smoking":"true","Pool Access":"true", "Breakfast":"true","Lunch":"true","Wifi":"true",},"date":{},"price":"1200","image":"{{ url_for('static',filename='styles/r3.jpg') }}",},
        {"roomtype":"Basic Suite","area":"80","sleeps":"4","bedtype":"1 Double, 2 single", "features":{"Smoking":"true","Pool Access":"true", "Breakfast":"true","Lunch":"true","Wifi":"true",},"date":{},"price":"1090","image":"{{ url_for('static',filename='styles/r5.jpg') }}",},
        {"roomtype":"Basic Suite","area":"80","sleeps":"4","bedtype":"1 Double, 2 single", "features":{"Smoking":"true","Pool Access":"true", "Breakfast":"true","Lunch":"true","Wifi":"true",},"date":{},"price":"1090","image":"{{ url_for('static',filename='styles/r5.jpg') }}",},
        {"roomtype":"Basic Suite","area":"80","sleeps":"4","bedtype":"1 Double, 2 single", "features":{"Smoking":"true","Pool Access":"true", "Breakfast":"true","Lunch":"true","Wifi":"true",},"date":{},"price":"1090","image":"{{ url_for('static',filename='styles/r5.jpg') }}",},
    ]
n=len(rooms)

for i in rooms:
    i["date"] = D
    app.db.Rooms.insert_one(i)

print(D)
