#include <iostream>
#include <list>
using namespace std;

// classes are a user-defined data type
class YouTubeChannel {
private:
    string Name;
    string OwnerName;
    int SubscribersCount;
    list<string> PublishedVideoTitles;
public:
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

    void Subscribe() { SubscribersCount++;}
    
    void Unsubscribe() {
        if (SubscribersCount >0)
            SubscribersCount--;
    }

    void PublishVideo(string title) {
        PublishedVideoTitles.push_back(title);
    }

    string GetName() {
        return Name;
    };
    
    void SetName(string newName) {
        Name = newName;
    }
};

int main()
{
    YouTubeChannel ytChannel1("ChannelName1", "OwnerName1");
    ytChannel1.Subscribe();
    ytChannel1.Unsubscribe();
    ytChannel1.Subscribe();
    ytChannel1.PublishVideo("Title1");
    ytChannel1.PublishVideo("Title2");
    ytChannel1.GetName();
    ytChannel1.SetName("NameChanged");
    ytChannel1.GetName();
    // ytChannel1.PublishedVideoTitles.push_back("Title1");
    // ytChannel1.PublishedVideoTitles.push_back("Title2");
    
    YouTubeChannel ytChannel2("ChannelName2", "OwnerName2");

    ytChannel1.GetInfo();
    ytChannel2.GetInfo();

    system("pause>0");
}