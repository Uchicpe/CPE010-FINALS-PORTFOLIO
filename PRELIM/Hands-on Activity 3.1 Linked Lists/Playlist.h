#ifndef PLAYLIST_H
#define PLAYLIST_H

#include <iostream>
#include <string>

class Song{
    public:
    std::string data;
    Song* next = nullptr;
    Song* prev = nullptr;
};

Song* dllcreatingSong(std::string newData){
    Song *newSong = new Song;
    newSong->data = newData;
    newSong->prev = newSong;
    newSong->next = newSong;
    return newSong;
}

void dllTraversePlaylist(Song *head) {

    if (head == nullptr) {
        std::cout << "No song in your Playlist :(" << std::endl;
        return;
    }

    Song *current = head;
    int trackNumber = 1;

    std::cout << "  Currently Playing: " << std::endl;

    do {
        std::cout << trackNumber << ". " << current->data << std::endl;
        current = current->next;
        trackNumber++;
    } while (current != head);

    std::cout << std::endl;
}

void dllInsertHeadPlaylist(std::string newData, Song** currentHead){
    Song *newSong = dllcreatingSong(newData);

    if (*currentHead == nullptr) {
        *currentHead = newSong;
        return;
    }
    Song *tail = (*currentHead)->prev;
    
    newSong->next = *currentHead;
    newSong->prev = tail;
    (*currentHead)->prev = newSong;
    tail->next = newSong;
    *currentHead = newSong;
}

void dllDeleteNodePlaylist(std::string targetSong, Song** headRef) {
    if (*headRef == nullptr) return;

    Song* current = *headRef;

    do {
        if (current->data == targetSong) {
            // Case 1: Only one SONG(Node) in the list
            if(current->next == current) {
                *headRef = nullptr;
            } 
            // Case 2: Multiple SONGS(Nodes) in the list
            else {
                current->prev->next = current->next;
                current->next->prev = current->prev;

                // If deleting the head SONG(node), move SONG(node) pointer forward
                if (current == *headRef) {
                    *headRef = current->next;
                }
            }

            delete current;
            return;
        }
        current = current->next;
    } while (current != *headRef);

    std::cout << "Song unavailable in your Playlist :(" << std::endl;
}

#endif