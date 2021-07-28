#include <iostream>
#include <list>
using namespace std;

// classes are a user-defined data type
class YouTubeChannel {
private:
    string Name;
    int SubscribersCount;
    list<string> PublishedVideoTitles;
protected:
    string OwnerName;
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
    // Name getter and setter:
    string GetName() {
        return Name;
    };
    void SetName(string newName) {
        Name = newName;
    }
};

// derived class
class CookingYouTubeChannel : public YouTubeChannel {
    public:
    CookingYouTubeChannel(string name, string ownerName):YouTubeChannel(name, ownerName) {
    }
    void Practice() {
        cout << OwnerName << " is practicing..."<<endl;
    }

};

int main()
{

    // Create two base class channels:
    YouTubeChannel ytChannel1("ChannelName1", "OwnerName1");
    ytChannel1.Subscribe();
    ytChannel1.Unsubscribe();
    ytChannel1.Subscribe();
    ytChannel1.PublishVideo("Title1");
    ytChannel1.PublishVideo("Title2");
    ytChannel1.GetName();
    ytChannel1.SetName("NameChanged");
    ytChannel1.GetName();
    
    YouTubeChannel ytChannel2("ChannelName2", "OwnerName2");

    // Display channels:
    ytChannel1.GetInfo();
    ytChannel2.GetInfo();

    // Create derived class channel:
    CookingYouTubeChannel ytChannel("Kitchen Channel", "Kitchen Owner");
    ytChannel.PublishVideo("Recipe 1");
    ytChannel.PublishVideo("Recipe 2");
    ytChannel.GetInfo();
    ytChannel.Practice();

    system("pause>0");
}