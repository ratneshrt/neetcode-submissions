class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        array = []

        for i in range(numRows):
            array.append([1]*(i+1))
        
        if numRows > 2:
            for i in range(2,numRows):
                for j in range(1,len(array[i])-1):
                    array[i][j] = array[i-1][j-1] + array[i-1][j]
        
        return array