#include <iostream>
#include <string>
using namespace std;
class item
{
    string iname;
    int qt;

public:
    item()
    {
        qt = 0;
    }
    void setiname(string ch)
    {
        iname = "" + ch;
    }
    void setqt(int g)
    {
        qt = qt + g;
    }
    string priname()
    {
        return iname;
    }
    int prqt()
    {
        return qt;
    }
};
class inventory
{
    item i[30];
    int ico;

public:
    inventory()
    {
        ico = 0;
    }
    int find(string ch)
    {
        for (int j = 0; j < ico; j++)
        {
            if (i[j].priname() == ch)
            {
                return j;
            }
        }
        return -1;
    }
    void add()
    {
        string ch;
        int q;
        cout << "Enter item name : ";
        cin >> ch;
        cout << "Enter item quantity : ";
        cin >> q;
        int c = find(ch);
        if (c >= 0)
        {
            i[c].setqt(q);
        }
        else
        {
            i[ico].setiname(ch);
            i[ico].setqt(q);
            ico++;
        }
    }
    void remove(string ch)
    {
        int c = find(ch);
        if (c >= 0)
        {
            cout << "Item name " << i[c].priname() << " is removed from the inventory." << endl;
            for (int j = c; j < ico; j++)
            {
                i[j] = i[j + 1];
            }
            ico--;
        }
        else
        {
            cout << "There is no item with this name ." << endl;
        }
    }
    void checkinventorylow(int m)
    {
        cout << "<---- Items that are low in inventory ----> " << endl;
        int c = 0;
        for (int j = 0; j < ico; j++)
        {
            if (i[j].prqt() < m)
            {
                cout << "Item with name " << i[j].priname() << " only left " << i[j].prqt() << endl;
                c = 1;
            }
        }
        if (c == 0)
        {
            cout << "No item is low in inventory" << endl;
        }
    }
};
int main()
{
    inventory in1;
    in1.add();
    in1.add();
    in1.add();
    cout << "Enter the minimum quantity you want of every item in inventory : ";
    int n;
    cin >> n;
    in1.checkinventorylow(n);
    string ch;
    cout << "Enter the name of the item for removing it from inventory : ";
    cin >> ch;
    in1.remove(ch);
    in1.checkinventorylow(n);
}