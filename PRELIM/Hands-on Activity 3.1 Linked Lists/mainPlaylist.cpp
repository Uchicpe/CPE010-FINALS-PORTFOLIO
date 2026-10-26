#include "Playlist.h"
#include <iostream>

int main() {
    Song *dllplaylistHead = nullptr; 

    std::cout << "\n^v^ CURRENT PLAYLIST ^v^" << std::endl;
    dllInsertHeadPlaylist("Numb by Linkin Park", &dllplaylistHead);
    dllInsertHeadPlaylist("Free Bird by Lynyrd Skynyrd", &dllplaylistHead);
    dllInsertHeadPlaylist("In The End by Linkin Park", &dllplaylistHead);
    dllInsertHeadPlaylist("Smells Like Teen Spirit by Nirvana", &dllplaylistHead);
    dllInsertHeadPlaylist("Chop Suey! by System Of A Down", &dllplaylistHead);
    dllTraversePlaylist(dllplaylistHead);

    std::cout << "ADDED A SONG!\n" << std::endl;
    dllInsertHeadPlaylist("Somebody Told Me by The Killers", &dllplaylistHead);
    dllTraversePlaylist(dllplaylistHead);

    std::cout << "...REMOVING A SONG...\n" << std::endl;
    dllDeleteNodePlaylist("Somebody Told Me by The Killers", &dllplaylistHead);
    dllTraversePlaylist(dllplaylistHead);

    std::cout << "\n^v^ PLAYLIST ^v^" << std::endl;
    Song *currentSong = dllplaylistHead;
    
    if (currentSong != nullptr) {
        std::cout << "Current Song: " << currentSong->data << std::endl;
        currentSong = currentSong->next;
    }
    if (currentSong != nullptr) {
        std::cout << "Next Song: " << currentSong->data << std::endl;
        currentSong = currentSong->prev;
    }
    if (currentSong != nullptr) {
        std::cout << "Previous Song: " << currentSong->data << std::endl;
        std::cout << "\n";
    }

    return 0;
}