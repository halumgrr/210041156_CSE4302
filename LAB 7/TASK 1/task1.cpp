#include"task1.h"

int main() {
    StudentCollection collection;

    collection.addStudent("Ami", 95.5);
    collection.addStudent("Tumi", 88.0);
    collection.addStudent("She", 75.5);

    cout << "Ami's grade: " << collection["Ami"] << endl;
    cout << "Tumi's grade: " << collection["Tumi"] << endl;

    collection["Amii"] = 96.0;

    cout << "Updated Ami's grade: " << collection["Ami"] << endl;
}
