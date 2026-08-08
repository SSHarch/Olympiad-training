#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main() {
    ifstream fin("word.in");
    ofstream fout("word.out");

    int N, K;
    fin >> N >> K;

    vector<string> words(N);
    for (int i = 0; i < N; i++) {
        fin >> words[i];
    }

    int current_line_length = 0;

    for (int i = 0; i < N; i++) {
        int word_len = words[i].length();

        // If this is the first word on the line, or it fits with a space
        if (current_line_length == 0) {
            // Start the line with this word
            fout << words[i];
            current_line_length = word_len;
        } else if (current_line_length + 1 + word_len <= K) {
            // Add a space and the word
            fout << " " << words[i];
            current_line_length += 1 + word_len;
        } else {
            // Can't fit: start a new line
            fout << "\n" << words[i];
            current_line_length = word_len;
        }
    }

    fout << "\n";

    fin.close();
    fout.close();
    return 0;
}
