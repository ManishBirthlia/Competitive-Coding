class Solution {
public:
    // Solved by Manish Kumar (India)
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        sort(seats.begin(),seats.end());
        sort(students.begin(),students.end());
        int count=0;
        for(int i=0;i<size(seats);i++){
            if(seats[i]>students[i]){
                count+=seats[i]-students[i];
            }else{
                count+=students[i]-seats[i];
            }
        }
        return count;
    }
};