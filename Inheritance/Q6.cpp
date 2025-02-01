#include <iostream>
using namespace std;
// virtual is used to avoid Dimanod problem
class actor {
private:
    string name;
    int age;
public:
    void setname(string n) { name = n; }
    void setage(int a) { age = a; }
    string getname() { return name; }
    int getage() { return age; }
};

// Virtual inheritance to prevent duplicate instances of 'actor' in 'allactor'
class tvactor : virtual public actor {
private:
    int tv_project_count;
public:
    void settvproject(int c) { tv_project_count = c; }
    int gettvproject() { return tv_project_count; }

    void set_tv_actor(string n, int a, int p) {
        setname(n);
        setage(a);
        tv_project_count = p;
    }

    void get_tv_actor() {
        cout << "\nTV Actor Details:\n";
        cout << "Name: " << getname() << "\n";
        cout << "Age: " << getage() << "\n";
        cout << "TV Projects: " << gettvproject() << "\n";
    }
};

class movieactor : virtual public actor {
private:
    int movie_project_count;
public:
    void setmovieproject(int c) { movie_project_count = c; }
    int getmovieproject() { return movie_project_count; }

    void set_movie_actor(string na, int ag, int m) {
        setname(na);
        setage(ag);
        movie_project_count = m;
    }

    void get_movie_actor() {
        cout << "\nMovie Actor Details:\n";
        cout << "Name: " << getname() << "\n";
        cout << "Age: " << getage() << "\n";
        cout << "Movie Projects: " << getmovieproject() << "\n";
    }
};

class allactor : public tvactor, public movieactor {
public:
    void set_all_actor_data(string n, int a, int y, int m) {
        setname(n);
        setage(a);
        setmovieproject(y);
        settvproject(m);
    }

    void get_all_actor() {
        cout << "\nAll Actor Details:\n";
        cout << "Name: " << getname() << "\n";
        cout << "Age: " << getage() << "\n";
        cout << "Movie Projects: " << getmovieproject() << "\n";
        cout << "TV Projects: " << gettvproject() << "\n";
    }
};

// Main function to demonstrate functionality
int main() {
    allactor actor1;

    // Setting data for an actor
    actor1.set_all_actor_data("Shah Rukh Khan", 58, 100, 50);

    // Displaying all actor details
    actor1.get_all_actor();

    return 0;
}