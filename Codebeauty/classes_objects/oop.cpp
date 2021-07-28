#include <iostream>
#include <list>
using namespace std;

// classes are a user-defined data type
class YouTubeChannel {
public:
    string Name;
    string OwnerName;
    int SubscribersCount;
    list<string> PublishedVideoTitles;

    //constructor
    YouTubeChannel(string newName, string newOwnerName) : SubscribersCount(0) {
        Name = newName;
        OwnerName = newOwnerName;
    }

    void GetInfo() {
        cout << "Name: " << Name << endl;
        cout << "OwnerName: " << OwnerName << endl;
        cout << "SubscribersCount: " << SubscribersCount << endl;
        cout << "Videos: " << endl;
        for (string videoTitle: PublishedVideoTitles)
            cout << videoTitle << endl;
    }
};

int main()
{
    YouTubeChannel ytChannel1("ChannelName1", "OwnerName1");
    ytChannel1.PublishedVideoTitles.push_back("Title1");
    ytChannel1.PublishedVideoTitles.push_back("Title2");
    
    YouTubeChannel ytChannel2("ChannelName2", "OwnerName2");

    ytChannel1.GetInfo();
    ytChannel2.GetInfo();

    system("pause>0");
}