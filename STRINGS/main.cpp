// #include <iostream>
// #include <string>
// #include <algorithm>
// #include <cstring>
// using namespace std; 
// int main() {
//     string my_name = "SaiKiran";
//     string my_initial = "Patnana";
//     // cout<<my_name<<" "<<my_initial;
//     string my_god;
//     // cin>>my_god;
//     // getline(cin, my_god);
//     // cout<<my_god<<endl;
//     char ch = 'A'; //characters must be enclosed with single quotes;
//     // cout<<int(ch);
//     // cout<<int('A');
//     // reverse funtion on strings:
//     // reverse(my_name.begin(), my_name.end());
//     // cout<<my_name;
//     // substr funtion on strings:
//     // cout<<my_name.substr(0,3);
//     // cout<<my_name.substr(3);
//     // cout<<my_name.substr(3,5);
//     string str1 = "Sai";
//     string str2 = "Kiran";
//     // + operatior in cpp;
//     // str1 += str2; //here there is no copy created;
//     // str1 = str1+str2; //here copy is created;
//     // cout<<str1;
//     // concatenating char arrays in cpp;
//     // char str_1[10] = "Sai";
//     // char str_2[10] = "Kiran";
//     // strcat(str_1,str_2);
//     // cout<<str_1;
//     // push_back function on characters;
//     // char a = 'n';
//     // string str = "SaiKira";
//     // str.push_back(a);
//     // cout<<str;
//     // cout<<my_name.size()<<endl; //O(1);
//     // cout<<my_name.length()<<endl; //O(1);
//     // char ch1[20] = "SaiKiran"; 
//     // cout<<strlen(ch1)<<endl; //O(n);
//     int num = 1234;
//     string num_str = to_string(num);
//     // cout<<num_str<<endl;
//     // cout<<num_str[2]<<endl;
//     return 0;
// }
// given a string str, sort the string;
/*#include<iostream>
#include <string>
using namespace std;
int main() {
    string str = "codingwallah";
    // using bubble_sort;
    int n = str.length();
    for (int i=0; i<n-1; i++) {
        int count = 0;
        for(int j=0; j<n-1-i; j++) {
            if(str[j]>str[j+1]) {
                swap(str[j], str[j+1]);
                count ++;
            }
        }
        if(count==0) {
            break;
        }
    }
    cout<<str;
    // time_complexity: O(n^2);
    return 0;
}*/
// to reduce time_complexity we use count_sort algo of tc(O(n));
// incomplete code(error);
// #include <iostream>
// #include <string>
// using namespace std;
// void countSort(int array[], int n, int f) {
//     int array_1[10];
//     for(int i=0; i<=10; i++) {
//         array_1[i] = 0;
//         for(int j=0; j<n; j++) {
//             if((array[j]/f)%10==i) {
//                 array_1[i]++;
//             }
//         }
//         if(i>0) {
//             array_1[i] += array_1[i-1];
//         }
//     }
//     int ans_array[n];
//     for(int i=n-1; i>=0; i--) {
//       int x = array_1[(array[i]/f)%10]-1;
//       ans_array[x] = array[i];
//       array_1[(array[i]/f)%10] = x;
//     }
//     for(int i=0; i<n; i++) {
//       array[i] = ans_array[i];
//     }
//     return;
// }
// int main() {
//     string ch = "dcba";
//     int n = ch.length();
//     int array[n];
//     for(int i=0; i<n; i++) {
//         array[i] = (int(ch[i]) - int('a'));
//         cout<<array[i]<<" ";
//     }
//     cout<<endl;
//     int max = array[0];
//     for(int i=1; i<n; i++) {
//         if(max<array[i]) {
//             max = array[i];
//         }
//     }
//     int f = 1;
//     while(max>0) {
//         countSort(array,n,f);
//         f *= 10;
//         max /= f;
//     }
//     for(int i=0; i<n; i++) {
//         cout<<array[i]<<" ";
//     }
//     return 0;
// }
// for two strings to be anagram in nature, then both the words should contain same letters with same count of each letter;
// checking if the two strings given are forming an anagram or not;
/*#include <iostream>
#include <string>
using namespace std;
bool isAnagram(string str_1, string str_2) {
    int f_array[26];
    int n1 = str_1.length();
    int n2 = str_2.length();
    for(int i=0; i<26; i++) {
         f_array[i] = 0;
        for(int j=0; j<n1; j++) {
            if(i==(int(str_1[j])-97)) {
                f_array[i]++;
            }
        }
        for(int j=0; j<n1; j++) {
            if(i==(int(str_2[j])-97)) {
                f_array[i]--;
            }
        }
        if(f_array[i]!=0) {
            return false;
        }
    }
    return true;
}
int main() {
    string str_1 = "anagram";
    string str_2 = "nagaram";
    cout<<isAnagram(str_1, str_2);
    return 0;
}*/
// two strings are said to be isomorphic in nature if they are in one to one correspondance;
// checking if two strings are isomorphic?
/*#include <iostream>
#include <string>
using namespace std;
bool isIsomorphic(string str_1, string str_2) {
     int strArray_1[26];
     int strArray_2[26];
     int n = str_1.length();
    if(str_1.length()!=str_2.length()) {
        return false;
    }
    else {
        for(int i=0; i<26; i++) {
            strArray_1[i] =-1;
            strArray_2[i] =-1;
        }
        for(int i=0; i<26; i++) {
            for(int j=0; j<n; j++) {
            if(i==(int(str_1[j])-97)){
                strArray_1[i] += j;
            }
            if(i==(int(str_2[j])-97)){
                strArray_2[i] += j;
            }
            }
        }
        for(int i=0; i<n; i++) {
             if(strArray_1[(int(str_1[i])-97)]!=strArray_2[(int(str_2[i])-97)]) {
                return false;
            }
        }
    }
    return true;
}
int main() {
    // string str_1 = "abcdabga";
    // string str_2 = "ecdfechc";
    // string str_1 = "aab";
    // string str_2 = "xxy";
    string str_1 = "abcdec";
    string str_2 = "viouog";
    int result = isIsomorphic(str_1,str_2);
    cout<<"ans: "<<result<<endl;
    return 0;
}*/
// finding the least common prifix string among an array of strings given;
/*#include <iostream>
#include <string>
using namespace std;
string leastCommonPrefix(string array[], int n, int min) {
    string ans  = "";
    for(int i=0; i<min; i++) {
        char x = array[0][i];
        int k = 0;
        for(int j=0; j<n; j++) {
             if(array[j][i]==x) {
                 k++;
             }
        }
        if(k==n) {
            ans+=x;
        }
        else{
            break;
        }
    }
  return ans;
}
int main() {
  string array[] = {"ant", "anti", "anthem"};
  int n = sizeof(array)/sizeof(array[0]);
  int min = array[0].size();
  for(int i=0; i<n; i++) {
      if(min>array[i].size()) {
          min = array[i].size();
      }
  }
  cout<<leastCommonPrefix(array,n,min);
  return 0;
}*/
// alter approach for above question;
/*#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string leastCommonPrefix(string array[], int n) {
    // to sort an array, we have to include algorithm and use syntax sort(array, array+n) where n is number of elements in that array;
    sort(array, array+n);
    string ans = "";
    for(int i=0; i<n; i++) {
        if(array[0][i]==array[n-1][i]) {
            ans += array[0][i];
        }
        else break;
    }
    return ans;
}
int main() {
    string array[] = {"flower", "flask", "flight"};
    int n = sizeof(array)/sizeof(array[0]);
    cout<<leastCommonPrefix(array,n);
    return 0;
}*/
// decoding an encoded string;
// it's not efficient of code of type [ab[2[d][2c]]];
/*#include <iostream>
#include <string>
using namespace std;
string encodedStr(string str, int n) {
    string result = "";
    int k, j, p, q;
    string temp, num;
    for(int i=0; i<str.length(); i++) {
        if(str[i]!=']') {
            result += str[i];
        }
        else {
            k = result.length();
            j = k-1;
            temp = "";
            while(true) {
                if(result[j]!='[') {
                    temp += result[j];
                    j--;
                }
                else {
                    p = j-1;
                    num = "";
                    while(int(result[p])>=48 and int(result[p])<=57){
                        num += result[p];
                        p--;
                    }
                    break;
                }
            }
            string temp_reverse = "";
            for(int m=temp.size()-1; m>=0; m--) {
                temp_reverse += temp[m];
            }
            string reverse_num;
            for(int n=num.size()-1; n>=0; n--) {
                reverse_num += num[n];
            }
            int multiple;
            if(reverse_num.size()!=0) {
             multiple = stoi(reverse_num);
            }
            else {
                multiple = 1;
            }
            string addendum = "";
            string new_str = str.substr(0,p+1);
            for(int q = 0; q<multiple; q++) {
                for(int f=0; f<temp_reverse.size(); f++)
                    new_str += temp_reverse[f];
            }
            result = new_str;
            }
        }
        return result;
    }

int main() {
    string str = "[2[abc4[ad5[bc]]]]";
    int n = str.length();
    cout<<encodedStr(str, n);
    return 0;
}*/
// given a binary string and an integer k, return the max number of consecutive ones in the string if you skip at most k 0's;
/*#include <iostream>
#include <string>
using namespace std;
int ans = 0;
int result(string binary, int k) {
    for (int i=0; i<binary.length(); i++) {
        for(int j=i; j<binary.length(); j++) {
            string sub_string = binary.substr(i,j);
            int count = 0;
            for(int p=0; p<sub_string.length(); p++) {
                if(sub_string[p]=='0') {
                    count++;
                }
            }
            if(count<=k) {
                if(ans<sub_string.length()) {
                    ans = sub_string.length();
                }
            }
        }
    }
    return ans;
}
int main() {
    string binary = "0001101011";
    int k = 2;
    cout<<result(binary, k);
    return 0
    //  time_complexity: O(n^2);
}*/
// above program using sliding window technique;
/*#include <iostream>
#include <string>
using namespace std;
int result(string binary, int k) {
    int zeroCount = 0;
    int maxLength = 0;
    int j = 0;
    int i = 0;
    while(j<binary.size()) {
           if(binary[j]=='0')  {
               zeroCount++;
               maxLength++;
           }
           else if(binary[j]=='1'){
               maxLength++;
           }
           while(zeroCount>k) {
                   if(binary[i]=='0') {
                       zeroCount--;
                       maxLength--;
                       i++; 
                }
            }
        j++;
    }
    return maxLength;
}
int main() {
    string binary = "0001101011";
    int k = 2;
    cout<<result(binary,k);
    // time_complexity: O(n);
    // space_complexity: O(1);
    return 0;
}
*/
// count_sort_algo practice;
/*#include <iostream>
using namespace std;
void countSort(int array[], int n, int max) {
    int frequency_array[max+1];
    for(int i=0; i<max+1; i++) {
        frequency_array[i] = 0;
        for(int j=0; j<n; j++) {
            if(array[j]==i) {
                frequency_array[i]++;
            }
        }
        if(i>0) {
            frequency_array[i] += frequency_array[i-1];
        }
    }
    int sorted_array[n];
    for(int i=n-1; i>=0; i--) {
       int x = frequency_array[array[i]]-1;
       sorted_array[x] = array[i];
       frequency_array[array[i]] = x;
    }
    for (int i=0; i<n; i++) {
        array[i] = sorted_array[i];
    }
    return;
}
int main() {
    int array[] = {10,9,8,6,5,4,3,5,3,5,2,1,0};
    int n = sizeof(array)/sizeof(array[0]);
    int max = array[0];
    for(int i=1 ; i<n; i++) {
        if(array[i]>max) {
            max = array[i];
        }
    }
    countSort(array, n, max);
    for(int i=0; i<n; i++ ) {
        cout<<array[i]<<" ";
    }
    return 0;
}*/
// radix_sort_algo practice;
/*#include <iostream>
using namespace std;
void radixSort(int array[], int n, int f) {
    int frequency_array[10];
    for(int i=0; i<10; i++) {
        frequency_array[i] = 0;
        for(int j=0; j<n; j++) {
            if(((array[j]/f)%10)==i) {
                frequency_array[i]++;
            }
        }
        if(i>0) {
            frequency_array[i] += frequency_array[i-1];
        }
    }
    int sorted_array[n];
    for(int i=n-1; i>=0; i--) {
        int x = frequency_array[(array[i]/f)%10] - 1;
        sorted_array[x] = array[i];
        frequency_array[(array[i]/f)%10] = x;
    }
    for(int i=0; i<n; i++) {
        array[i] = sorted_array[i];
    }
    
    return;
}
int main() {
    int array[] = {98, 45,67,34,127,896,143,996,212};
    int n = sizeof(array)/sizeof(array[0]);
    int max = array[0];
    for(int i=1; i<n; i++) {
        if(array[i]>max) {
            max = array[i];
        }
    }
    int f = 1;
    while(max!=0) {
        radixSort(array,n,f);
        f *= 10;
        max /= 10;
    }
    for(int i=0; i<n; i++) {
        cout<<array[i]<<" ";
    }
    return 0;
}*/
// ex-1:
// 1. Write a C++ program to reverse a given string.
/*#include <iostream>
#include <string>
using namespace std;
int main() {
    string word = "w3resource";
    for(int i=word.size()-1; i>=0; i--) {
        cout<<word[i];
    }
    return 0;
}*/
// 2. Write a C++ program to change every letter in a given string with the letter following 
// it in the alphabet (i.e. a becomes b, p becomes q, z becomes a).
/*#include <iostream>
#include <string>
using namespace std;
int main() {
    string word = "w3resource";
    for(int i=0; i<word.size(); i++) {
    if(int(word[i])>=97 and int(word[i])<=122) {
        cout<<char(int(word[i]+1));
    }
    else {
        cout<<word[i];
    }
    }
    return 0;
}*/
// 3. Write a C++ program to capitalize the first letter of each word in a given string.
// Words must be separated by only one space.
/*#include <iostream>
#include <string>
using namespace std;
int main() {
   string sentence = "cpp string exercises";
   for (int i=0; i<sentence.length(); i++) {
       if(i==0 or sentence[i-1]==' ') {
           cout<<char((int(sentence[i])-96)+64);
       }
       else{
           cout<<sentence[i];
       }
   }
   return 0;
}*/
/*#include <iostream>
#include <string>
using namespace std;
int main() {
    string sentence = "C++ is a general purpose programming language.";
    string long_word;
    string ans = "";
    int i=0;
    while(i<sentence.size()) {
        long_word = "";
        if(i==0 or sentence[i-1]==' ') {
            while(sentence[i]!=' ' and i<sentence.size()) {
                long_word += sentence[i];
                i++;
            }
        }
        if(long_word.size()>ans.size()) {
            ans = long_word;
        }
        i++;
    }
    cout<<ans;
    return 0;
}*/
//5. Write a C++ program to sort characters (numbers and punctuation symbols are not included) in a string.
/*#include <iostream>
#include <string>
using namespace std; 
void countSort(int array[], int n, int max) {
    int frequency_array[max+1];
    for(int i=0; i<=max+1; i++) {
        frequency_array[i] = 0;
        for(int j=0; j<n; j++) {
            if(array[j]==i) {
            frequency_array[i]++;
            }
        }
        if(i>0) {
            frequency_array[i] += frequency_array[i-1];
        }
    }
    int sorted_array[n];
    for(int i=n-1; i>=0; i--) {
        int x = frequency_array[array[i]]-1;
        sorted_array[x] = array[i];
        frequency_array[array[i]] = x;
    }
    for(int i=0; i<n; i++) {
        array[i] = sorted_array[i];
    }
    return;
}
int main() {
    string word = "python";
    int n = word.length();
    //using_count_sort;
    int array[n];
    for(int i=0; i<n; i++) {
        array[i] = int(word[i])-97;
    } 
    int max = array[0];
    for(int i=0; i<n; i++) {
        if(array[i]>max) {
            max = array[i];
        }
    }
    countSort(array, n, max);
    word = "";
    for(int i=0; i<n; i++) {
        word += char(array[i]+97);
    }
    cout<<word;
    return 0;
}*/
//6. Write a C++ program to check whether the characters e and g are separated by 
//exactly 2 places anywhere in a given string at least once.
/*#include <iostream>
#include <string>
using namespace std;
int result(string word) {
    int m,n;
    for(int i=0; i<word.length(); i++) {
        int m,n;
        if(word[i]=='e') {
            m = i;
            for(int j=0; j<word.length(); j++) {
                if (word[j]=='g') {
                    n = j;
                    if((m-n==2) or (m-n==-2)) {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}
int main() {
    string word = "eagerer";
    cout<<result(word);
    return 0;
}*/
//7. Write a C++ program to count all the vowels in a given string
/*#include <iostream>
using namespace std;
int main() {
    string word = "eagereraeiou";
    string vowels = "aeiou";
    int count = 0;
    for(int i=0; i<vowels.length(); i++) {
        for(int j=0; j<word.length(); j++) {
            if(vowels[i]==word[j]) {
                count++;
            }
        }
    }
    cout<<count;
    return 0;
}*/
//8. Write a C++ program to count all the words in a given string;
/*#include <iostream>
#include <string>
using namespace std;
int main() {
    string words = "Write a C++ program to count all the words in a given string";
    int count = 0;
    int i = 0;
    while(i<words.size()) {
        if(words[i]==' ') {
            count++;
        }
        i++;
    }
    cout<<count+1;
    return 0;
}*/
//Write a C++ program to check whether two characters appear equally in a given string;
//program_incomplete...;
/*#include <iostream>
#include <string>
using namespace std;
bool result(string word) {
string new_word = "";
for(int i=0; i<word.length(); i++) {
    int count = 0;
    for(int j=0; j<new_word.length(); j++) {
        if(new_word[j]==word[i]) {
            count++;
        }
    }
    if(count == 0) {
        new_word += word[i];
    }
}
int count_array[new_word.length()];
for(int i=0; i<new_word.length(); i++) {
    int count = 0;
    count_array[i] = count;
    for(int j=0; j<word.size(); j++) {
        if(new_word[i]==word[j]) {
            count++;
        }
    }
    count_array[i]=count;
}
for(int i=0; i<new_word.size(); i++) {
    for(int j=i+1; j<new_word.size(); j++) {
        if(count_array[i]==count_array[j] and count_array[i]>=2) {
            return true;
        }
    }
}
return false;
}
int main() {
string word = "abcdeef";
cout<<result(word);
return 0;
}*/
//10. Write a C++ program to check if a given string is a Palindrome or not;
/*#include <iostream>
#include <string>
using namespace std;
int main() {
    string Palindrome = "madam";
    int n = Palindrome.size();
    bool result = true;
    int i=0;
    while(i<=((n-1)/2)) {
        char x = Palindrome[i];
        char y = Palindrome[n-1-i];
        if(Palindrome[i]==Palindrome[n-1-i]) {
        result = true;
        }
        else {
            result = false;
            break;
        }
    i++;
    }
    cout<<result;
    return 0;
}*/
//11. Write a C++ program to find a word in a given string that has the highest number of repeated letters.
/*#include <iostream>
using namespace std;
int main() {
    string sentence = "Print a communication text in a separate line.";
    int n = sentence.size();
    string ans;
    int i=0;
    int j;
    while((i<n) and (i==0  or sentence[i]==' ')){
        if(i!=0) {
        j = i+1;
        }
        string long_word = "";
        while(sentence[j]!=' ' and j<n)  {
            long_word += sentence[j];
            j++;
        }
        if(ans.size()<long_word.size()) {
            ans = long_word;
        }
        i = j;
    }
    cout<<ans;
    return 0;
}
*/
// 12. Write a C++ program to insert a dash character (-) 
// between two odd numbers in a given string of numbers. 
/*#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    string number = "0246813579";
    string mod_number;
    int n = number.size();
    int i = 0;
    while(i<n) {
        if((number[i]=='1' or number[i] == '3' or number[i] == '5' or number[i] == '7' or number[i] == '9') and (number[i+1]=='1' or number[i+1] == '3' or number[i+1] == '5' or number[i+1] == '7' or number[i+1] == '9') ) {
            mod_number += number[i];
            mod_number += "-";
            i++;
        }
        else {
            mod_number += number[i];
            i++;
        }
    }
    cout<<mod_number;
    return 0;
}
*/
// 13. Write a C++ program to change the case (lower to upper and upper to lower cases) 
// and of each character in a given string. 
/*#include <iostream>
#include <string>
using namespace std;
int main() {
    string word = "pYTHON";
    string new_word = "";
    for(int i=0; i<word.size(); i++) {
        if(int(word[i])>=65 and int(word[i])<=90) {
            new_word += char((int(word[i])-64)+96);
        }
        else if(int(word[i])>=97 and int(word[i])<=122) {
            new_word += char((int(word[i])-96)+64);
        }
        else {
            new_word += word[i];
        }
    }
    cout<<new_word;
    return 0;
}*/
// 14. Write a C++ program to find the numbers in a given string and calculate the sum of all numbers.
/*#include<iostream>
#include <string>
using namespace std;
int main() {
    string phrase = "w3resource from 2008"; 
    int sum = 0;
    int i = 0;
    string number = "";
    while(i<phrase.size()) {
    while((int(phrase[i])>=48) and (int(phrase[i])<=57) and (i<phrase.size())){
      number += phrase[i];
      i++;
    }
    if(number.size()!=0) {
    sum += stoi(number);
    number = "";
    }
    i++;
    }
    cout<<sum;
    return 0;
}*/
// 15. Write a C++ program to convert a given non-negative integer into English words.
/*#include <iostream>
#include <string>
using namespace std;
string ones_case(string num) {
    if(num=="1") {
        return "One";
    }
    else if(num=="2") {
        return "Two";
    }
    else if(num=="3") {
        return "Three";
    }
    else if(num=="4") {
        return "Four";
    }
    else if(num=="5") {
        return "Five";
    }
    else if(num=="6") {
        return "Six";
    }
    else if(num=="7") {
        return "Seven";
    }
    else if(num=="8") {
        return "Eight";
    }
    else if(num=="9") {
        return "Nine";
    }
    else {
        return "";
    }
}
string tens_case(string num) {
    if(num=="10") {
        return "Ten";
    }
    else if(num=="11") {
        return "eleven";
    }
    else if(num=="12") {
        return "Twelve";
    }
    else if(num=="13") {
        return "Thirteen";
    }
    else if(num=="14") {
        return "Fourteen";
    }
    else if(num=="15") {
        return "Fifteen";
    }
    else if(num=="16") {
        return "Sixteen";
    }
    else if(num=="17") {
        return "Seventeen";
    }
    else if(num=="18") {
        return "Eighteen";
    }
    else if(num=="19") {
        return "Ninteen";
    }
    else if(num=="2") {
        return "Twenty";
    }
    else if(num=="3") {
        return "Thirty";
    }
    else if(num=="4") {
        return "Forty";
    }
    else if(num=="5") {
        return "Fifty";
    }
    else if(num=="6") {
        return "Sixty";
    }
    else if(num=="7") {
        return "Seventy";
    }
    else if(num=="8") {
        return "Eighty";
    }
    else if(num=="9") {
        return "Ninty";
    }
    else {
        return "";
    }
}
string findNumberInWords(string num) {
    string dup_num = num;
    string ans;
    int i = 0;
    if(stoi(num)==0) {
        return "Zero";
    }
    if(num.size()>=9) {
        if(num[i]!='0') {
        ans += tens_case(num.substr(i,1)) + " ";
        }
        else {
            ans += "";
        }
    i++;
    }
    if(num.size()>=8) {
        if(num[i]!='0' and (num[i-1]=='1')) {
            ans += tens_case(num.substr(i-1,2)) + " Crore ";
        }
        else if(num[i]!='0') {
        ans += ones_case(num.substr(i,1)) + " Crore ";
        }
        if(num[i-1]!='0' and num[i]=='0') {
            ans += " Crore ";
        }
        else {
            ans += "";
        }
    i++;
    }
    if(num.size()>=7) {
        if(num[i]!='0') {
        ans += tens_case(num.substr(i,1)) + " ";
        }
        else {
            ans += "";
        }
    i++;
    }
    if(num.size()>=6) {
        if(num[i]!='0' and (num[i-1]=='1')) {
            ans += tens_case(num.substr(i-1,2)) + " Lakh ";
        }
        else if(num[i]!='0') {
        ans += ones_case(num.substr(i,1)) + " Lakh ";
        }
        if(num[i-1]!='0' and num[i]=='0') {
            ans += " Lakh ";
        }
        else {
        ans += "";
        }
    i++;
    }
    if(num.size()>=5) {
        if(num[i]!='0') {
        ans += tens_case(num.substr(i,1)) + " ";
        }
        else {
         ans += "";
        }
    i++;
    }
    if(num.size()>=4) {
        if(num[i]!='0' and (num[i-1]=='1')) {
            ans += tens_case(num.substr(i-1,2)) + " Thousand ";
        }
        else if(num[i]!='0') {
        ans += ones_case(num.substr(i,1)) + " Thousand ";
        } 
        if(num[i-1]!='0'  and num[i]=='0') {
            ans += " Thousand ";
        }
        else {
        ans += "";
        }
    i++;
    }
    if(num.size()>=3) {
        if(num[i]!='0') {
        ans += ones_case(num.substr(i,1)) + " Hundred";
        }
        else {
            ans += "";
        }
    i++;
    }
    if(num.size()>=2) {
    if(num.substr(2,1)=="1") {
        ans +=  + " and " + tens_case(num.substr(i,1)+num.substr(i+1,1));
    }
    else {
        ans +=  + " and " + tens_case(num.substr(i,1)) +" "+ ones_case(num.substr(i+1,1));
    }
    }
    return ans;
}
int main() {
    string number;
    cout<<"enter number: ";
    cin>>number;
    cout<<findNumberInWords(number);
    return 0;
}*/
// finding_logngest_common_prefix;
/*#include <iostream>
using namespace std;
int main() {
    string array[5] = {"apple", "application", "aptitude", "approval", "approach"};
    // sorting using selection_sort;
    int n = sizeof(array)/sizeof(array[0]);
    for(int i=0; i<n; i++) {
        int min_idx = i;
        for(int j = i+1; j<n; j++) {
            if(array[min_idx]>array[j]) {
                min_idx = j;
            }
        }
        if(min_idx!=i) {
            swap(array[min_idx],array[i]);
        }
    }
    // to finding_longest_common_prefix;
    string ans;
    int i = 0;
    while(array[0][i]==array[n-1][i]) {
        ans += array[0][i];
        i++;
    }
    cout<<ans;
    return 0;
}*/
// 19. Write a C++ program to reverse only the vowels of a given string.
/*#include <iostream>
#include <string>
using namespace std;
int main() {
    string word = "intense";
    string vowels = "";
    string ans = "";
    for(int i=0; i<word.size(); i++) {
        if(word[i]=='a' or word[i]=='e' or word[i]=='i' or word[i]=='o' or word[i]=='u') {
            vowels += word[i];
        }
    }
    int j = vowels.size()-1;
    for(int i=0; i<word.size(); i++) {
        if(word[i]=='a' or word[i]=='e' or word[i]=='i' or word[i]=='o' or word[i]=='u') {
           ans += vowels[j];
           j--;
        }
        else{
            ans += word[i];
        }
    }
    cout<<ans;
    return 0;
}*/
// 20. Write a C++ program to find the length of the longest palindrome in a given string (uppercase or lowercase letters). 
/*#include <iostream>
using namespace std;
string reverse_string(string str) {
    string rev;
    for(int i=str.size()-1; i>=0; i--) {
        rev += str[i];
    }
    return rev;
}
int main() {
    string word = "abddddeeff";
    string ans;
    for(int i=0; i<word.size(); i++) {
        for(int j=i; j<word.size(); j++) {
            string temp = word.substr(i,j+1);
            if(temp==reverse_string(temp) and ans.size()<temp.size()) {
                ans = temp;
            }
        }
    }
    cout<<ans.size();
    return 0;
}*/
// 21. Write a C++ program to check whether a given string is a subsequence 
// of another given string. Return 1 for true and 0 for false. 
/*#include <iostream>
using namespace std;
int main() {
    string main = "CGTTCGGCTATCGTACGTTCTATTCTATGATTTCTAA";
    string subsequence = "TTCTATGATTTC";
    int ans;
    for(int i=0; i<main.size(); i++) {
        for(int j=i; j<main.size(); j++) {
            string check = main.substr(i,j-i+1);
            if(check==subsequence) {
                ans = 1;
                break;
            }
            else {
                ans = 0;
            }
        }
        if(ans == 1) {
            break;
        }
    }
    cout<<ans;
    return 0;
}*/
// 22. Write a C++ program to remove all special characters from a given string.
/*#include <iostream>
using namespace std;
int main() {
    string word = "abcd $ js# @acde$";
    string mod_word = "";
    for(int i=0; i<word.size(); i++) {
        if((32 <=int(word[i]) and int(word[i])<= 47) or (58 <=int(word[i]) and int(word[i])<= 64)  or (91 <=int(word[i]) and int(word[i])<= 96) or (123 <=int(word[i]) and int(word[i])<= 126)){
            mod_word += " ";
        }
        else {
            mod_word += word[i];
        }
    }
    cout<<mod_word;
    return 0;
}*/
// 24. Write a C++ program to count the number of unique characters in two given strings.
/*#include <iostream>
using namespace std;
int main() {
    string str1 = "Python";
    string str2 = "Java";
    string unique_str = "";
    for(int i=0; i<str1.size(); i++) {
        int ans = 0;
        for(int j=0; j<=unique_str.size(); j++) {
            if(str1[i]==unique_str[j]) {
                ans = 0;
                break;
            }
            else {
                ans = 1;
            }
        }
        if(ans==1) {
            unique_str += str1[i];
        }
    }
    for(int i=0; i<str2.size(); i++) {
        int ans = 0;
        for(int j=0; j<unique_str.size(); j++) {
            if(str2[i]==unique_str[j]) {
                ans = 0;
                break;
            }
            else {
                ans = 1;
            }
        }
        if(ans==1) {
            unique_str += str2[i];
        }
    }
    cout<<unique_str.size()<<endl;
    cout<<unique_str<<endl;
    return 0;
}*/
// 24. Write a C++ program to count the number of duplicate characters in a given string.
/*#include <iostream>
using namespace std;
int main() {
    string str = "Total number of unique characters of the said two strings.";
    string unique_str = "";
    for(int i=0; i<str.size(); i++) {
        int ans = 0;
        for(int j=0; j<=unique_str.size(); j++) {
            if(str[i]==unique_str[j]) {
                ans = 0;
                break;
            }
            else {
                ans = 1;
            }
        }
        if(ans==1) {
            unique_str += str[i];
        }
    }
    cout<<(str.size()-unique_str.size())<<endl;
    cout<<unique_str<<endl;
    return 0;
}*/
// 25. Write a C++ program to find the longest sequence of consecutive ones in a given binary string. 
/*#include <iostream>
#include <string>
using namespace std;
int main() {
    string binary = "11000111001";
    string ans = "";
    for(int i=0; i<binary.size(); i++) {
        for(int j=i; j<binary.size(); j++) {
            string temp = binary.substr(i,j-i+1);
            int flag = 0;
            for(int k=0; k<temp.size(); k++) {
                if(temp[k]=='0') {
                    flag = 0;
                    break;
                }
                else {
                    flag = 1;
                }
            }
            if(flag ==1 and ans.size()<=temp.size()) {
                ans = temp;
            }
        }
    }
    cout<<ans;
    return 0;
}*/
//key_note:  In defining second param of a substr funtion, it should be like j-1+1;
// 26. Write a C++ program to check if a given string is a title-cased string or not. 
// When the string is title cased, return "True", otherwise return "False".
/*#include <iostream>
using namespace std;
int main() {
    string Title = "The Quick Brown Fox.";
    bool ans = true;
    for(int i=0; i<Title.size(); i++) {
        if(i==0 or Title[i-1]==' ')  {
        if(65<=int(Title[i]) and int(Title[i])<=90) {
            ans = true;
        }
        else {
            ans = false;
            break;
        }
        }
    }
    if (ans==true) {
        cout<<"True";
    }
    else {
        cout<<"False";
    }
    return 0;
}*/
// Write a C++ program to insert a space when a lower character follows an upper character in a given string.
/*#include <iostream>
using namespace std;
int main() {
    string str= "TheQuickBrownFox.";
    string mod = "";
    for(int i=0; i<str.size(); i++) {
        if((97<=int(str[i]) and int(str[i])<=122) and (65<=int(str[i+1]) and int(str[i+1])<=90)) {
        mod += str[i];
        mod += " ";
        }
        else {
            mod += str[i];
        }
    }
    cout<<str<<endl;
    cout<<mod;
    return 0;
}*/
// 28. Write a C++ program to extract the first specified number of vowels from a given string. 
// If the specified number is less than the number of vowels present in the text, display "n is less than the number of vowels present in the string".
/*#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int count = 0;
    string vowel = "";
    string str = "Extract the first n number of vowels from the said string";
    for(int i=0; i<str.size(); i++) {
        if(str[i]=='a' or  str[i]=='e' or str[i]=='i' or str[i]=='o' or str[i]=='u' or str[i]=='A' or  str[i]=='E' or str[i]=='I' or str[i]=='O' or str[i]=='U' ) {
            count++;
            if(count<=n){
            vowel += str[i];
            }
        }
        if(count>n) {
            cout<<"n is less than the number of vowels present in the string"<<endl;
            break;
        }
    }
    if(count<n) {
        cout<<"n is greater than the number of vowels present in the string"<<endl;
    }
    cout<<count<<endl;
    return 0;
}*/
// 29. Write a C++ program to print a given integer with commas separating the thousands.
/*#include <iostream>
#include <string>
using namespace std;
int main()  {
    string str = "10000";
    string dup = "";
    int i = str.size()-1;
    while(i>=0) {
       int j = 0;
       while(j<3) {
            dup += str[i];
            i--;
            j++;
       }
        if(j==3 and i+2!=0) {
        dup += ",";
        }
    }
    str = "";
    for(int i=dup.size()-1; i>=0; i--) {
        str += dup[i];
    }
    cout<<str<<endl;
    return 0;
}*/
// 30. Write a C++ program to identify the missing letter in a given string (list of alphabets). 
// The method returns, "There is no missing letter!" if no letters are missing from the string.
/*#include <iostream>
using namespace std;
int main() {
    string str = "ghjl";
    int result = 1;
    int j = 0;
    for(int i=int(str[0]); i<=int(str[str.size()-1]); i++) {
        if(int(str[j])==i) {
            result = 1;
            j++;
        }
        else {
            result = 0;
            cout<<char(i)<<endl;
            break;
        }
    }
    if(result == 1) {
        cout<<"There is no letter missing!";
    }
    return 0;
}*/
// 30. Write a C++ program to identify the missing letter in a given string (list of alphabets). \\
// The method returns, "There is no missing letter!" if no letters are missing from the string.
// #include <iostream>
// using namespace std;
// int main() {
//     string str = "ghjl";
//     int result = 1;
//     int j = 0;
//     for(int i=int(str[0]); i<=int(str[str.size()-1]); i++) {
//         if(int(str[j])==i) {
//             result = 1;
//             j++;
//         }
//         else {
//             result = 0;
//             cout<<char(i)<<endl;
//         }
//     }
//     // if(result == 1) {
//     //     cout<<"There is no letter missing!";
//     // }
//     return 0;
// }

/*#include <stdio.h>
  
// function to show bytes in memory, from location start to start+n
void show_mem_rep(char *start, int n)
{
    int i;
    for (i = 0; i < n; i++)
         printf(" %.2x", start[i]);
    printf("\n");
}
  
//Main function to call above function for 0x01234567
int main()
{
   int i = 0x01234567;
   show_mem_rep("%d", sizeof(i));
   show_mem_rep((char *)&i, sizeof(i));
   getchar();
   return 0;
}
*/

// yogeshwari's question 2:
/*#include <iostream>
#include <string>
using namespace std;
int getResult(string &s,int k) {
    int sum = 0;
    for(int i=0; i<s.length(); i++) {
        sum += abs((int)s[i]-96 - 1);
    }string s1 = "";
    for(int i=0; i<s.length(); i++) {
        s1 += "a";
    }if(sum<k) {
        int req = k-sum;
        int i = s.length()-1;
        while(req) {
            if(i<0) {
                return -1;
            }int a = ((int)s[i]-96) - 1;
            int b = 25-a;
            if(a<b){
                req += a;
                int ch;
                if(b>=req) {
                    ch = req;
                }else {
                    ch = b;
                }req -= ch;
                char c = (int)s[i] + ch;
                s1[i] = c;
            }i--;
        }
    }else {
        int req = sum-k;
        cout<<req<<endl;
        int i = s.length()-1;
        while(req) {
            if(i<0) {
                return -1;
            }int a = ((int)s[i]-96) - 1;
            if(req<=a){
                a -= req;
                req = 0;
            }else {
                req -= a;
                a = 0;
            }if(a){
            char c = (int)s[i] - a;
            s1[i] = c;
            }i--;
        }
    }s = s1;
    return 0;
}int main() {
    int n = 5;
    string s = "mayya";
    int k = 50;
    if(getResult(s,k)) {
        cout<<getResult(s, k);
    }else {
        cout<<s;
    }return 0;
}
*/

// Doubly Enclosed:
// stupid_approach_1:
// #include <iostream>
// #include <string>
// #include <vector> 
// using namespace std;
// string result(string &s, vector <int> quotes) {
//     if(quotes.size()==0) {
//         for(int i=0; i<s.size(); i++) {
//             if(s[i]==','){
//                 s[i] = '*';
//             }
//         }return s;
//     }int i = quotes[0]==0? 1 : 0;
//     if(i==0) {
//         for(int j=0; j<quotes[i]; j++) {
//           if(s[j]==','){
//               s[j] = '*';
//           }
//         }i = 1;
//     }while(i<quotes.size()-1) {
//             for(int j=quotes[i]+1; j<quotes[i+1]; j++) {
//               if(s[j]==','){
//                   s[j] = '*';
//                 }
//             }
//             i = i+2;
//     }if(quotes[i]<s.size()) {
//         for(int j=quotes[i]+1; j<s.size(); j++) {
//                 if(s[j]==','){
//                     s[j] = '*';
//                 }
//         }
//     }return s;
// }int main() {
//     string s;
//     int n;
//     cin>>n;
//     cin>>s;
//     vector <int> quotes;
//     for(int i=0; i<n; i++) {
//         if(s[i]=='\"') {
//         quotes.push_back(i);
//         }
//     }cout<<result(s,quotes);
//     return 0;
// }

// stupid_approach_2:
// #include <iostream>
// #include <string>
// #include <vector> 
// using namespace std;
// string result(string &s, vector <int> quotes) {
//     if(quotes.size()==0) {
//         for(int i=0; i<s.size(); i++) {
//             if(s[i]==','){
//                 s[i] = '*';
//             }
//         }return s;
//     }else {
//         vector <int> flag(s.size(),0);
//         int i = 0;
//         while(i<quotes.size()-1) {
//             for(int j=quotes[i]+1; j<quotes[i+1]; j++) {
//                 flag[j] = 1;
//             }i += 2;
//         }for(i=0; i<s.size(); i++) {
//             if(!flag[i] and s[i]==',') {
//                 s[i] = '*';
//             }
//         }
//     }return s;
// }int main() {
//     string s;
//     int n;
//     cin>>n;
//     cin>>s;
//     vector <int> quotes;
//     for(int i=0; i<n; i++) {
//         if(s[i]=='\"') {
//         quotes.push_back(i);
//         }
//     }cout<<result(s,quotes);
//     return 0;
// }
// stupid_approach_3:
// #include <iostream>
// #include <string>
// #include <vector> 
// using namespace std;
// string result(string &s, vector <int> quotes) {
//     if(quotes.size()==0) {
//         for(int i=0; i<s.size(); i++) {
//             if(s[i]==','){
//                 s[i] = '*';
//             }
//         }return s;
//     }else {
//         int i = 0;
//         int k = 0;
//         while(i<quotes.size()-1) {
//             while(k<s.size() and (k<quotes[i]+1 or k>quotes[i+1])) {
//                 if(s[k]==',') {
//                     s[k] = '*';
//                 }k++;
//             }i += 2;
//         }while(k<s.size()) {
//             if(s[k]==',') {
//                 s[k] = '*';
//             }k++;
//         }
//     }return s;
// }int main() {
//     string s;
//     int n;
//     cin>>n;
//     cin>>s;
//     vector <int> quotes;
//     for(int i=0; i<n; i++) {
//         if(s[i]=='\"') {
//         quotes.push_back(i);
//         }
//     }cout<<result(s,quotes);
//     return 0;
// }

// smart_approach_by_yogeshwari:
// #include<stdio.h>
// #include<string.h>
// int main(){
//   int n;
//   scanf("%d", &n);
//   char str[n+1];
//   scanf("%s", str);
//   int count = 0;
//   for (int i = 0; i < n; i++){
//       if(str[i] == '"'){
//          count++;
//       }
//       if(str[i] == ',' && count%2 == 0){
//          str[i] = '*';
//       }
//   }
//   printf("%s", str);
//   return 0;
// }

/*#include <iostream>
#include <string>
using namespace std;
int main() {
    int n;
    string s;
    cin>>n;
    cin>>s;
    int c = 0;
    for(int i=0; i<n; i++) {
        if(s[i]=='\"') {
            c++;
        }if(s[i]==',' and c%2==0){
            s[i] = '*';
        }
    }cout<<s;
    return 0;
}*/


/*#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    cin>>str;
    string lex_min = str;
    string lex_max = str;
    for(int i=0; i<str.size(); i++) {
        char c = str[str.size()-1];
        str.pop_back();
        str.insert(str.begin(),c);
        lex_min = min(str,lex_min);
        lex_max = max(str,lex_max);
    }cout<<lex_min<<endl<<lex_max;
    return 0;
}*/



