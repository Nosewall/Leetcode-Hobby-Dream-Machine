class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:

        validationDict = {
            "1": False,
            "2": False,
            "3": False,
            "4": False,
            "5": False,
            "6": False,
            "7": False,
            "8": False,
            "9": False,
        }

        validationEmpty = validationDict.copy()

        rowCount = 0;
        firstRowIndex = 0
        secondRowIndex = 0

        for x in range(9):
            for i in range(firstRowIndex, firstRowIndex + 3):
                for j in range(secondRowIndex, secondRowIndex + 3):
                    if board[i][j] == ".":
                        continue
                    if validationDict[board[i][j]] == True:
                        return False
                    elif validationDict[board[i][j]] == False:
                        validationDict[board[i][j]] = True

            rowCount += 1
            validationDict = validationEmpty.copy()
            firstRowIndex += 3
            if rowCount == 3:
                rowCount = 0
                firstRowIndex = 0
                secondRowIndex += 3

        for i in range(9):
            for j in range(9):
                if board[i][j] == ".":
                    continue
                if validationDict[board[i][j]] == True:
                    return False
                elif validationDict[board[i][j]] == False:
                    validationDict[board[i][j]] = True
            validationDict = validationEmpty.copy()

        for i in range(9):
            for j in range(9):
                if board[j][i] == ".":
                    continue
                if validationDict[board[j][i]] == True:
                    return False
                elif validationDict[board[j][i]] == False:
                    validationDict[board[j][i]] = True
            validationDict = validationEmpty.copy()

        return True
