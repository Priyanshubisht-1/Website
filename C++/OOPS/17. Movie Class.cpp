#include <iostream>
#include <string>
using namespace std;
class Review
{
private:
    string reviewerName;
    string comment;
    int rating;

public:
    Review()
    {
        rating = 0;
    }
    Review(string name, string c, int r)
    {
        reviewerName = name;
        comment = c;
        rating = r;
    }

    string getReviewerName() { return reviewerName; }
    string getComment() { return comment; }
    int getRating() { return rating; }
};

class Movie
{
private:
    string title;
    string director;
    string actors[3];
    Review reviews[10];
    int reviewCount;

public:
    Movie(string title, string director, string actors[3]) : title(title), director(director), reviewCount(0)
    {
        for (int i = 0; i < 3; ++i)
        {
            this->actors[i] = actors[i];
        }
    }

    void addReview(string reviewerName, string comment, int rating)
    {
        if (reviewCount < 10)
        {
            reviews[reviewCount++] = Review(reviewerName, comment, rating);
        }
        else
        {
            cout << "Cannot add more than 10 reviews." << endl;
        }
    }

    void displayReviews()
    {
        cout << "Reviews for " << title << ":" << endl;
        for (int i = 0; i < reviewCount; ++i)
        {
            cout << "Reviewer: " << reviews[i].getReviewerName() << ", Rating: " << reviews[i].getRating() << ", Comment: " << reviews[i].getComment() << endl;
        }
    }

    string getTitle()
    {
        return title;
    }
    string getDirector()
    {
        return director;
    }
    string *getActors()
    {
        return actors;
    }
};

int main()
{
    string actors[3] = {"Raj", "Rohit", "Ajay"};
    Movie movie("Movie", "Ram", actors);
    movie.addReview("Reviewer 1", "Great", 4);
    movie.addReview("Reviewer 2", "Boring", 1);
    movie.addReview("Reviewer 3", "Wierd", 2);
    movie.displayReviews();

    return 0;
}
