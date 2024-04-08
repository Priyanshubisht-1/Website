#include <iostream>
#include <string>
using namespace std;
class Restaurant
{
private:
    static const int MAX_ITEMS = 100;
    string menuItems[MAX_ITEMS];
    double prices[MAX_ITEMS];
    int ratings[MAX_ITEMS];
    int itemCount;

public:
    Restaurant()
    {
        itemCount = 0;
    }

    void addItem(string item, double price, int rating)
    {
        if (itemCount < MAX_ITEMS)
        {
            menuItems[itemCount] = item;
            prices[itemCount] = price;
            ratings[itemCount] = rating;
            itemCount++;
        }
        else
        {
            cout << "Cannot add more items. Menu is full." << endl;
        }
    }

    void removeItem(string item)
    {
        for (int i = 0; i < itemCount; ++i)
        {
            if (menuItems[i] == item)
            {
                for (int j = i; j < itemCount - 1; ++j)
                {
                    menuItems[j] = menuItems[j + 1];
                    prices[j] = prices[j + 1];
                    ratings[j] = ratings[j + 1];
                }
                itemCount--;
                break;
            }
        }
    }

    double calculateAverageRating()
    {
        if (itemCount == 0)
        {
            return 0.0;
        }
        double sum = 0.0;
        for (int i = 0; i < itemCount; ++i)
        {
            sum += ratings[i];
        }
        return sum / itemCount;
    }
};

int main()
{
    Restaurant restaurant;
    restaurant.addItem("Ice cream", 9.49, 3);
    restaurant.addItem("Juice", 8.99, 4);
    restaurant.addItem("Salad", 7.99, 5);
    restaurant.removeItem("Juice");
    double avgRating = restaurant.calculateAverageRating();
    cout << "Average rating: " << avgRating << endl;
    return 0;
}
