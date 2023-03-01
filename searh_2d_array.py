class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        found = False

        for row in range(len(matrix)):
            for col in range(len(matrix[0])):
                
                if matrix[row][col] > target: 
                    break;
                    
                elif matrix[row][col] == target:
                    return True

        return found
