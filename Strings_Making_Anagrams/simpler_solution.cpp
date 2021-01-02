int makeAnagram(string a, string b) {
	int del_count = 0;
	vector<int> numChars(26, 0);
	for(auto c: a) numChars[c - 'a']++;
	for(auto c: b) numChars[c - 'a']--;
	for(auto f: numChars) del_count += abs(f);

	return del_count;

}