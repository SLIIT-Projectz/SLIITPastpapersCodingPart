#include <iostream>

using namespace std;

class user
{
protected:
    string Name;
    string ID;
    movieshop *mshop;
    moviebuy *mobuy;
public:
    user(string uname, string uid, movieshop *umshop, moviebuy *umobuy);
    void display();
    ~user();
};

//no need implementation

class subscriber: public user
{
private:
    int telephone;
    string address;
    card *c;
    movierent *moRent;
public:
    subscriber(int stel, int saddress, card *sc, movierent *smoRent);
    void display();
    ~subscriber();
};



class movieshop
{
private:
    order *o;
    card *ca[SIZE];
    movie *movies[3];
public:
    movieshop(){
        movies[0] = new movie("mname", "mtype");
        movies[1] = new movie("mname", "mtype");
        movies[2] = new movie("mname", "mtype");
    }
    void listMovies();
    void order();
    void subscribe();
    ~movieshop();
};


class order
{
private:
    string date;
    moviebuy *mBuy[2];
public:
    order(string odate);
    ~order();
};


class card
{
private:
    string credit;
    string code;
    movieshop *mSh;
public:
    card(string ocredit, string ocode, movieshop *omSh);
    ~card();
};


class movie
{
protected:
    string name;
    string type;
public:
    movie(string oname, string otype);
    ~movie();
};


class movierent: public movie
{
private:
    string Rstatus;
    string date;
    float Rprice;
public:
    movierent(string oRstatus, string odate, float oRprice);
    ~movierent();
};


class moviebuy: public movie
{
private:
    string Bstatus;
    float Bprice;
    order *mOr[2];
public:
    moviebuy(string oBstatus, string odate, float oBprice);    movies[0] = new movie("mname", "mtype");
    movies[1] = new movie("mname", "mtype");
    movies[2] = new movie("mname", "mtype");
    ~moviebuy();
};


int main()
{
    user *u = new user("abc", "123", new movieshop("msname", "msaddress"), new moviebuy("mbstatus", "11/18/23", 500.00));
    subscriber *s = new subscriber(123, "abc", new card(123, "abc"), new movierent("mrstatus", "11/18/23", 500.00));

    // movieshop *myShop;
    card* myCard = new card("1234", "5678", &myShop); 
    movierent* myMovieRent = new movierent("Rented", "2023-11-08", 10.99); 
    subscriber mySubscriber(1234567890, "123 Main St", myCard, myMovieRent); 
    order* myOrder = new order("2023-11-08"); 
    moviebuy* myMovieBuy = new moviebuy("Bought", "2023-11-08", 15.99); 

    // myShop.listMovies();
    // myShop.order();
    // myShop.subscribe();

    // mySubscriber.display();
    // myCard->display();
    // myOrder->display(); 
    // myMovieBuy->display(); 
    
    delete u;
    delete s;
    delete myShop;
    delete myCard;
    delete myMovieRent;
    delete mySubscriber;
    delete myOrder;
    delete myMovieBuy;

    return 0;

}

