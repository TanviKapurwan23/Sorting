string countSort(string arr) {
    vector<int> count(26, 0);
    
    // Count frequency of each character
    for (char c : arr) {
        count[c - 'a']++;
    }
    
    // Construct the sorted string
    string result = "";
    for (int i = 0; i < 26; i++) {
        result += string(count[i], char(i + 'a'));
    }
    
    return result;
}
