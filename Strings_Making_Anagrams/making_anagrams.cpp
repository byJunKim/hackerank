using namespace std;
unordered_map<char, int> str1_hash;
// Complete the makeAnagram function below.
int makeAnagram(string a, string b) {
    int del_count = 0;
    //create a hash table for characters of string a
    for(int i=0; i < a.length(); i++){
        auto it = str1_hash.find(a[i]);
        if(it == str1_hash.end()){
            //insert the (character, counter) pair
            str1_hash.insert({a[i], 1});
        }else{
            //increment counter
            it->second++;
        }
    }
    
    for(int i=0; i < b.length(); i++){
        auto it = str1_hash.find(b[i]);
        if(it == str1_hash.end()){
            del_count++;
        }else if(it->second == 0){
            del_count++;
        }else{
            //decrement the counter
            it->second--;
        }
    }
    //Now chceck if there is any remaining characters in string a
    for(auto it = str1_hash.begin(); it != str1_hash.end(); it++){
        if(it->second != 0) del_count+=it->second;
    }
    
    return del_count;
}