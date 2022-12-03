const int MAX_LINE_LEN = 1000;
char s[MAX_LINE_LEN+1]; 

cin.getline(s, MAX_LINE_LEN+1); // terminator = newline
cin.getline(s, MAX_LINE_LEN+1, '.')); // terminator = full stop
