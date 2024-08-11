// Create a book class having details like book id, title and price. A user can store and later he/she can check the details of any book (by using setDetails() and showDetails() functions respectively).
 //Use file handling given scenario.
 #include<iostream>
 #include<fstream>
 using namespace std;

 class book{
    public:
    string bookid,title;
    float price;
    book(string bookid,string title,float price)
    {
        this->bookid=bookid;
        this->title=title;
        this->price=price;
    }
    void storeDetails()
    {
    ofstream on("bookdata.txt");
    on<<bookid<<endl;
    on<<title<<endl;
    on<<price<<endl;
    cout<<"Book details are added into the file \n";
    }
    void readDetails()
    {
    cout<<"Book details after reading from file are : \n";
    ifstream in("bookdata.txt");
    in>>bookid;
    in>>title;
    in>>price;
    cout<<"BOOK ID :"<<bookid<<endl;
    cout<<"TITLE :"<<title<<endl;
    cout<<"PRICE :"<<price<<endl;
    }
 };
 
 int main()
 {
    book b("dsa123","DataStructure",500.0);
     ofstream on("bookdata.txt");
    b.storeDetails();
    b.readDetails();
    return 0;
 }
