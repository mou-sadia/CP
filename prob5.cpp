#include <iostream>
#include <stack>
#include <queue>
#include <string>
using namespace std;
int main() {
stack<string> backStack;
stack<string> forwardStack;
queue<string> downloadQueue;
string currentPage = "";
string websites[] = {"google.com", "youtube.com", "facebook.com", "instagram.com"};
for (string site : websites) {
if (!currentPage.empty()) {
backStack.push(currentPage);
}
currentPage = site;
while (!forwardStack.empty()) {
forwardStack.pop();
}
cout<<"Visited: "<<currentPage<<endl;
}
for (int i=0; i<2; i++) {
if (!backStack.empty()) {
forwardStack.push(currentPage);
currentPage = backStack.top();
backStack.pop();
cout<<"Went back to: "<<currentPage<<endl;
} else {
cout<<"No more pages to go back."<<endl;
}
}
if (!forwardStack.empty()) {
backStack.push(currentPage);
currentPage = forwardStack.top();
forwardStack.pop();
cout<<"Went forward to: "<<currentPage<<endl;
} else {
cout<<"No more pages to go forward."<<endl;
}
string filesToDownload[] = {"file1.pdf", "video.mp4", "image.png"};
for (string file : filesToDownload) {
downloadQueue.push(file);
}
while (!downloadQueue.empty()) {
cout<<"Downloading: "<<downloadQueue.front()<<" -- Done! --"<<endl;
downloadQueue.pop();
}
cout<<endl<<"--- Browser Status ---"<<endl;
cout<<"Current page: "<<currentPage<<endl;
stack<string> tempBack = backStack;
cout<<"Back history: ";
while (!tempBack.empty()) {
cout<<tempBack.top()<<" ";
tempBack.pop();
}
cout<<endl;
stack<string> tempForward = forwardStack;
cout<<"Forward pages: ";
while (!tempForward.empty()) {
cout<<tempForward.top()<<" ";
tempForward.pop();
}
cout<<endl;
cout<<"Remaining downloads: ";
if (downloadQueue.empty()) {
cout<<"None"<<endl;
} else {
queue<string> tempQueue = downloadQueue;
while (!tempQueue.empty()) {
cout<<tempQueue.front()<<" ";
tempQueue.pop();
}
cout<<endl;
}
return 0;
}
