class Solution:
    def countStudents(self, students: List[int], sandwiches: List[int]) -> int:
        zero,one=0,0
        for s in students:
            if s==0:
                zero+=1
            else:
                one+=1
        for s in sandwiches:
            if s==0 and zero:
                zero-=1
            elif s==1 and one:
                one-=1
            else :
                return zero+one
        return zero+one