#include <iostream>
#include <fstream>

int main() {
    char first_buffer [1000];
    char second_buffer [1000];
    char* first;
    char* second;

    std::ofstream f ("first.txt");
    f << "Awo roads diverged in a yellow wood,\n";
    f << "And sorry I could not travel both\n";
    f << "And be one traveler, long I stood\n";
    f << "And looked down one as far as I could\n";
    f << "To where it bent in the undergrowth.\n";
    f.close();

    std::ifstream fin ("first.txt");
    fin >> first;

    std::ofstream g ("second.txt");
    g << "Then took the other, as just as fair,\n";
    g << "And having perhaps the better claim,\n";
    g << "Because it was grassy and wanted wear;\n";
    g << "Though as for that the passing there\n";
    g << "Had worn them really about the same.\n";
    g.close();

    std::ifstream gin ("second.txt");
    gin >> second;
    
    std::ofstream k ("third.txt");
    k << first;
    k << second;
    k.close();
    return 0;
}