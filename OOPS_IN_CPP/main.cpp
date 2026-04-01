// finding_peak_element_in an array....
// BruteForce solution using linearSearch...
/*#include <iostream>
using namespace std;
int main() {
    int array[] = {0,1,4,0};
    int n = sizeof(array)/sizeof(array[0]);
    for (int i=1; i<n; i++) {
        if(array[i]>array[i-1] and array[i]>array[i+1]) {
            cout<<i;
            break;
        }
    }
    // time_complexity: O(n);
    return 0;
}*/
// #include <iostream>
// using namespace std;
// int findPeakElement(int array[], int n) {
//     int low = 0;
//     int high = n-1;
//     int mid;
//     int ans = -1;
//     while(low<=high) {
//         mid = low + ((high-low)/2);
//         if(array[mid]>array[mid-1]) {
//             ans = max(mid,ans);
//             low  = mid+1;
//         }
//         else {
//             high = mid-1;
//         }
//     }
//     return ans;
// }
// int main() {
//     int array[] = {1,2,3,4,5};
//     int n = sizeof(array)/sizeof(array[0]);
//     cout<<findPeakElement(array,n);
//     return 0;
// }
// finding peakIndex in case of array of peakArrays:
/*#include <iostream>
using namespace std;
int findingPeakIdx(int array[], int n) {
    int low = 0;
    int high = n-1;
    while(low<=high) {
        int mid = low + ((high-low)/2);
        if(mid==0) {
            if (array[mid]>array[1]) {
                return 0;
            }
            else {
                return 1;
            }
        }
        else if(mid==n-1) {
            if(array[mid]>array[n-2]) {
                return n-1;
            }
            else {
                return n-2;
            }
        }
        else {
            if(array[mid]>array[mid-1] && array[mid] > array[mid+1]) {
                return mid;
            }
            else if(array[mid]>array[mid-1]) {
                low = mid+1;
            }
            else {
                high = mid-1;
            }
        }
    }
    return -1;
}
int main() {
    int array[] = {3,4,5,1,9,10,2,8,6,1};
    int n = sizeof(array)/sizeof(array[0]);
    cout<<findingPeakIdx(array, n);
    return 0;
}*/
//checking the presence of a target element in a sorted 2D_array in which last element of each subarray is less than the first element next subarray;
/*#include <iostream>
using namespace std;
int isTargetPresent(int array[3][4], int n, int target) {
    int low = 0;
    int high = n-1;
    while(low<=high) {
        int mid = low + ((high-low)/2);
        if(array[mid/4][mid%4] == target) {
            return 1;
        }
        else if(array[mid/4][mid%4]<target) {
            low = mid + 1;
        }
        else {
            high = mid -1;
        }
    }
    return 0;
}
int main() {
    int array[3][4] = {1,3,5,7,10,11,16,20,23,30,34,50};
    int n = sizeof(array)/sizeof(array[0][0]);
    int target = 17;
    cout<<isTargetPresent(array, n, target);
    return 0;
}
*/
// oops in cpp:
#include <iostream>
#include<cstring>
using namespace std;
class SaiKiran {
    int rank = 10;
    int ability = 100;
    public:
    void print_rank() {
    cout<<rank<<endl;
    }
    int grade;
    char *name;
    int level;
    string star;
    SaiKiran() {
        // cout<<this<<endl;
        name = new char[100];
    }
    SaiKiran(int grade, int level) {
        this->grade = grade;
        this->level = level;
        // this->star = star;
        // this->name = name;
    }
    // SaiKiran(SaiKiran& theTemp) {
    //     cout<<"you are king SaiKiran."<<endl;
    //     this-> grade = theTemp.grade;
    //     this->level = theTemp.level;
    //     this->star = theTemp.star;
    // }
    // void set_rank(int rank) {
    //     this->rank = rank;
    // }
    // void set_ability(int rank) {
    //     this->ability = rank;
        
    // }
    // int get_rank() {
    //     return rank;
    // }
    // int get_ability() {
    //     return ability;
    // }
    void setGrade(int grade) {
        this->grade = grade;
    }
    void setLevel(int level) {
        this->level = level;
    }
    void setName(char name[]) {
        strcpy(this->name, name);
    }
    void print_details() {
        cout<<"grade: "<<this->grade<<endl;
        cout<<"level: "<<this->level<<endl;
        // cout<<"star: "<<this->star<<endl;
        cout<<"name: "<<this->name<<endl;
    }
};
int main() {
    // SaiKiran king(1,1,"mayya");
    // SaiKiran theEmperor(king);
    SaiKiran obj1('a', 1);
    char name[100] = "omnamahsivaya";
    obj1.setName(name);
    obj1.setGrade(1);
    obj1.setLevel(1);
    obj1.print_details();
    // cout<<&king<<endl;
    // SaiKiran *thop = new SaiKiran();
    // (*thop).set_rank(15);
    // thop -> set_rank(20);
    // (*thop).set_ability(95);
    // thop -> set_ability(98);
    // cout<<(*thop).get_rank()<<endl;
    // cout<<(*thop).get_ability()<<endl;
    // SaiKiran nextLevel(2, 1, "FIVE");
    // nextLevel.grade = 4;
    // cout<<nextLevel.grade<<endl;
    // SaiKiran vereLevel(nextLevel);
    // cout<<vereLevel.grade<<endl;
    // cout<<sizeof(SaiKiran);
    // king.set_rank(1);
    // king.print_rank();
    // cout<<king.get_rank();
    // king.set_rank = 1;
    // cout<<king.rank<<endl;
    // cout<<king.ability;
    // cout<<sizeof(king);
    return 0;
}



















