class MyBook{
    string title;
    string author;
    int price;
    public:
    MyBook(string t,string a,int p){
        title=t;
        author=a;
        price=p;
    }
    void display(){
        cout << "Title: "<<title << endl;
        cout << "Author: "<<author << endl;
        cout << "Price: "<<price << endl;
    }
};