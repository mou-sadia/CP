#include <iostream>
#include <queue>
#include <string>
using namespace std;

struct PrintJob {
    int id;
    string documentName;
    int pageCount;
};

int main() {
    queue<PrintJob> printQueue;
    printQueue.push({1, "Report.docx", 5});
    printQueue.push({2, "Invoice.pdf", 3});
    printQueue.push({3, "Photo.jpg", 2});
    printQueue.push({4, "Assignment.doc", 6});
    printQueue.push({5, "Slides.ppt", 4});
    printQueue.push({6, "Form.pdf", 1});

    int totalJobs = 0;
    int totalPages = 0;
    int totalTime = 0;

    cout << "--- Printing Jobs ---\n";

    while (!printQueue.empty()) {
        PrintJob job = printQueue.front();
        printQueue.pop();

        int jobTime = job.pageCount;
        totalJobs++;
        totalPages += job.pageCount;
        totalTime += jobTime;

        cout << "Job ID: " << job.id
             << ", Document: " << job.documentName
             << ", Pages: " << job.pageCount
             << ", Estimated time: " << jobTime << " seconds\n";
    }
    cout << "\n--- Summary ---\n";
    cout << "Total jobs: " << totalJobs << endl;
    cout << "Total pages: " << totalPages << endl;
    cout << "Total time: " << totalTime << " seconds" << endl;
    if (totalJobs > 0) {
        cout << "Average pages per job: " << (float)totalPages / totalJobs << endl;
    }

    return 0;
}
