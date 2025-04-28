#include <iostream>
#include <vector>
using namespace std;

class Video
{
public:
    string name;
    string id;
    string genre;
    string director;
    string releaseDate;
    int price;
    Video(string name = "", string id = "", string genre = "", string director = "", string releaseDate = "", int price = 5)
    {
        this->name = name;
        this->id = id;
        this->genre = genre;
        this->director = director;
        this->releaseDate = releaseDate;
        this->price = price;
    }
    void print()
    {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Genre: " << genre << endl;
        cout << "Director: " << director << endl;
        cout << "Release Date: " << releaseDate << endl;
        cout << "Price: $" << price << endl;
    }
};

class Stack
{
public:
    vector<Video> videos;
};

int main()
{
    Video v1, v2("Movie1", "001", "Action", "Director1", "2023-01-01", 10);
    Stack s;
    s.videos.push_back(v1);
    s.videos.push_back(v2);
    s.videos.push_back(Video("Movie2", "002", "Drama", "Director2", "2023-02-01", 15));
    s.videos.insert(s.videos.begin(), Video("Movie3", "003", "Comedy", "Director3", "2023-03-01", 20));
    while (!s.videos.empty())
    {
        s.videos.back().print();
        s.videos.pop_back();
    }
    return 0;
}