#include<iostream>
using namespace std;
class song
{
private:
    string title;
    string album;
    string singer;
public:
    song(){
        this->title="unknown";
        this->album="unknown";
        this->singer="unknown";
    }
    void setTitle(string title){
        this->title=title;
    }
    string getTitle(){
        return this->title;
    }
    void setAlbum(string album){
        this->album=album;
    }
    string getAlbum(){
        return this->album=album;
    }
    void setSinger(string singer){
        this->singer=singer;
    }
    string getSinger(){
        return this->singer;
    }
};



int main(){
    song songs[3];
    string title,album,singer;
    for(int i=0;i<3;i++){
        cout<<"Enter song title: ";
        getline(cin,title);
        cout<<"Enter song album: ";
        getline(cin,album);
        cout<<"Enter song singer: ";
        getline(cin,singer);

        songs[i].setTitle(title);
        songs[i].setAlbum(album);
        songs[i].setSinger(singer);
    }
    cout<<"Song Info: "<<endl;
    cout<<"No\t Title\t Album \t Singer\n";
    for(int i=0;i<3;i++){
        cout<<i+1<<"\t"<<songs[i].getTitle()<<"\t"<<songs[i].getAlbum()<<"\t"<<songs[i].getSinger()<<endl;
    }
    return 0;
}