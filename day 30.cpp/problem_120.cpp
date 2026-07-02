//Music playlist management system
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

struct Song {
    string title;
    string artist;
    int duration; // in seconds
};

int main() {
    vector<Song> playlist;
    int choice;

    do {
         cout << "\n--- Music Playlist Menu ---\n";
        cout << "1. Add Song\n";
        cout << "2. Display Playlist\n";
        cout << "3. Search Song\n";
        cout << "4. Delete Song\n";
        cout << "5. Play Song\n";
        cout << "6. Shuffle Playlist\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                Song song;
                cout << "Enter Song Title: ";
                cin.ignore();
                getline(cin, song.title);
                cout << "Enter Song Artist: ";
                getline(cin, song.artist);
                cout << "Enter Song Duration (in seconds): ";
                cin >> song.duration;

                playlist.push_back(song);
                break;
            }
            case 2: {

                cout << "Playlist:" << endl;
                for (const auto& s : playlist) {
                    cout << "Title: " << s.title 
                         << ", Artist: " << s.artist 
                         << ", Duration: " << s.duration 
                         << " seconds" 
                         << endl;
                }
                break;
            }
            case 3:
                {
                    string searchTitle;
                    cout << "Enter the title of the song to search: ";
                    cin.ignore();
                    getline(cin, searchTitle);

                    bool found = false;
                    for (const auto& s : playlist) {
                        if (s.title == searchTitle) {
                            cout << "Song found:" << endl;
                            cout << "Title: " << s.title 
                                 << ", Artist: " << s.artist 
                                 << ", Duration: " << s.duration 
                                 << " seconds" 
                                 << endl;
                            found = true;
                            break;
                        }
                    }
                    if (!found) {
                        cout << "Song not found." << endl;
                    }
                }
                break;
            case 4: 
                {
                    string deleteTitle;
                    cout << "Enter the title of the song to delete: ";
                    cin.ignore();
                    getline(cin, deleteTitle);

                    auto it = remove_if(playlist.begin(), playlist.end(), [&](const Song& s) {
                        return s.title == deleteTitle;
                    });

                    if (it != playlist.end()) {
                        playlist.erase(it, playlist.end());
                        cout << "Song deleted successfully." << endl;
                    } else {
                        cout << "Song not found." << endl;
                    }
                }
                break;
            case 5:

                {
                    string playTitle;
                    cout << "Enter the title of the song to play: ";
                    cin.ignore();
                    getline(cin, playTitle);

                    bool found = false;
                    for (const auto& s : playlist) {
                        if (s.title == playTitle) {
                            cout << "Now playing: " << s.title 
                                 << " by " << s.artist 
                                 << " (" << s.duration << " seconds)" 
                                 << endl;
                            found = true;
                            break;
                        }
                    }
                    if (!found) {
                        cout << "Song not found." << endl;
                    }
                }
                break;
            case 6:
                {
                    random_shuffle(playlist.begin(), playlist.end());
                    cout << "Playlist shuffled." << endl;
                }
                break;
            case 7:     
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 7);

    return 0;
}