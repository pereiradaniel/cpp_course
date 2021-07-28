#include <iostream>
#include <list>
using namespace std;

// classes are a user-defined data type
class YouTubeChannel {
public:
    string name;
    string OwnerName;
    int SubscribersCount;
    list<string> PublishedVideoTitles;
};

int main()
{
    YouTubeChannel ytChannel;
    ytChannel.name = "ChannelName";
    ytChannel.OwnerName = "OwnerName";
    ytChannel.SubscribersCount = 100;
    ytChannel.PublishedVideoTitles = {"Title1", "Title2"};

    cout << "Name: " << ytChannel.name << endl;
    cout << "OwnerName: " << ytChannel.OwnerName << endl;
    cout << "SubscribersCount: " << ytChannel.SubscribersCount << endl;
    cout << "Videos: " << endl;
    for (string videoTitle: ytChannel.PublishedVideoTitles)
        cout << videoTitle << endl;
    system("pause>0");
}