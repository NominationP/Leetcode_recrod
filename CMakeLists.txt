cmake_minimum_required(VERSION 3.9)
project(Leetcode_recrod)

set(CMAKE_CXX_STANDARD 11)

add_executable(
        Leetcode_recrod
#        data_struct&&algorithm/binary_tree.cpp
#        data_struct&&algorithm/binary_tree_up.cpp
#        data_struct&&algorithm/dfs.cpp
        data_struct&&algorithm/list.h
#        "easy/100. Same Tree.cpp"
#        "easy/104. Maximum Depth of Binary Tree.cpp"
#        "easy/136. Single Number.cpp"
#        "easy/167. Two Sum II - Input array is sorted.cpp"
#        "easy/2. Add Two Numbers.cpp"
#        "easy/383. Ransom Note.cpp"
#        "easy/387. First Unique Character in a String.cpp"
#        "easy/389. Find the Difference.cpp"
#        "easy/404. Sum of Left Leaves.cpp"
#        "easy/412. Fizz Buzz.cpp"
#        "easy/448. Find All Numbers Disappeared in an Array.cpp"
#        "easy/453. Minimum Moves to Equal Array Elements.cpp"
#        "easy/455. Assign Cookies.cpp"
#        "easy/461. Hamming Distance.cpp"
#        "easy/463. Island Perimeter.cpp"
#        "easy/463. Island Perimeter_self.cpp"
#        "easy/476. Number Complement.cpp"
#        "easy/485. Max Consecutive Ones.cpp"
#        "easy/492. Construct the Rectangle.cpp"
#        "easy/6. ZigZag Conversion.cpp"
#        "easy/7. Reverse Integer.cpp"
#        "easy/8. String to Integer (atoi).cpp"
#        "easy/9. Palindrome Number.cpp"
#        "medium/2. Add Two Numbers.cpp"
#        "medium/260. Single Number III.cpp"
#        "medium/3. Longest Substring Without Repeating Characters.cpp"
#        "medium/338. Counting Bits.cpp"
#        "medium/406.Queue Reconstruction by Height.cpp"
#        "medium/413. Arithmetic Slices.cpp"
#        "medium/419. Battleships in a Board.cpp"
#        "medium/442. Find All Duplicates in an Array.cpp"
#        "medium/462. Minimum Moves to Equal Array Elements II.cpp"
#        "medium/495.Teemo Attacking.cpp"
#        "medium/508. Most Frequent Subtree Sum.cpp"
#        "medium/513. Find Bottom Left Tree Value.cpp"
#        "medium/515. Find Largest Value in Each Tree Row.cpp"
#        "medium/526. Beautiful Arrangement.cpp"
#        "medium/535. Encode and Decode TinyURL.cpp"
#        "run/1. Two Sum.cpp"
#        "SwordOffer/Q/1 赋值运算符函数.cpp"
#        "SwordOffer/Q/2 实现Singleton模式.cpp"
#        SwordOffer/Q/26.complexListCopy.cpp
#        SwordOffer/Q/27.binaryToList.cpp
#        "SwordOffer/Q/3.find in [][].cpp"
#        SwordOffer/Q/tree.h
#        SwordOffer/model.cpp
#        model.cpp
#        SwordOffer/Q/2.3DataStructure/003__二维数组中的查找.cpp
#        common.cpp
#        SwordOffer/Q/2.3DataStructure/004__替换空格.cpp
#        SwordOffer/Q/2.3DataStructure/005__从尾到头打印链表.cpp
        data_struct&&algorithm/tree.h
#        SwordOffer/Q/2.3DataStructure/006__重建二叉树.cpp
#        SwordOffer/Q/2.3DataStructure/006__重建二叉树__2.cpp
#        SwordOffer/Q/2.3DataStructure/07_QueueWithTwoStacks/007__用俩个栈实现队列.cpp
#        SwordOffer/Q/2.3DataStructure/07_QueueWithTwoStacks/Queue.h
#        SwordOffer/Q/2.3DataStructure/07_QueueWithTwoStacks/QueueWithTwoStacks.cpp
#        SwordOffer/Q/2.3DataStructure/07_QueueWithTwoStacks/test.cpp
#        SwordOffer/Q/2.3DataStructure/06_ContructBinaryTree/test.cpp
#        SwordOffer/Q/2.3DataStructure/08_MinNumberInRotatedArray/MinNumberInRotatedArray.cpp
#        SwordOffer/Q/2.3DataStructure/08_MinNumberInRotatedArray/test.cpp
#        SwordOffer/Q/2.3DataStructure/09_Fibonacci/Fibonacci.cpp
#        SwordOffer/Q/2.3DataStructure/10_NumberOf1InBinary/NumberOf1InBinary.cpp
#        SwordOffer/Q/2.3DataStructure/10_NumberOf1InBinary/test.cpp
#        "SwordOffer/Q/3 Capter/11_Power/11_Power.cpp"
#        "SwordOffer/Q/3 Capter/11_Power/test.cpp"
#        "SwordOffer/Q/3 Capter/12_Print1ToMaxOfNDigits/Print1ToMaxOfNDigits.cpp"
#        "SwordOffer/Q/3 Capter/13_DeleteNodeInList/DeleteNodeInList.cpp"
#        "SwordOffer/Q/3 Capter/12_Print1ToMaxOfNDigits/test.cpp"
#        "SwordOffer/Q/3 Capter/13_DeleteNodeInList/test.cpp"
#        "SwordOffer/Q/3 Capter/14_RecroderArray/RecorderArray.cpp"
#        "SwordOffer/Q/3 Capter/15_KthNodeFromEnd/KthNodeFromEnd.cpp"
#        "SwordOffer/Q/3 Capter/14_RecroderArray/test.cpp"
#        "SwordOffer/Q/3 Capter/15_KthNodeFromEnd/test.cpp"
#        "SwordOffer/Q/3 Capter/16_ReverseList/ReverseList.cpp"
#        "SwordOffer/Q/3 Capter/17_MergeSortedLists/MergeSortedList.cpp"
#        "SwordOffer/Q/3 Capter/16_ReverseList/test.cpp"
#        "SwordOffer/Q/3 Capter/17_MergeSortedLists/test.cpp"
#        "SwordOffer/Q/3 Capter/16_ReverseList/test.cpp"
#        "SwordOffer/Q/3 Capter/17_MergeSortedLists/test.cpp"
#        "SwordOffer/Q/3 Capter/18_SubstructureInTree/SubstructureInTree.cpp"
#        "SwordOffer/Q/4 Capter/19_MirrorOfBinaryTree/MirrorOfBinaryTree.cpp"
#        "SwordOffer/Q/4 Capter/19_MirrorOfBinaryTree/test.cpp"
#        "SwordOffer/Q/3 Capter/18_SubstructureInTree/test.cpp"
#        "SwordOffer/Q/4 Capter/20_PrintMatrix/PrintMatrix.cpp"
#        "SwordOffer/Q/4 Capter/21_MinInStack/MInInStack.cpp"
#        "SwordOffer/Q/4 Capter/21_MinInStack/StackWithMin.h"
#        "SwordOffer/Q/4 Capter/22_StackPushPopOrder/StackPushPopOrder.cpp"
#        "SwordOffer/Q/4 Capter/22_StackPushPopOrder/test.cpp"
#        "SwordOffer/Q/4 Capter/21_MinInStack/test.cpp"
#        "SwordOffer/Q/4 Capter/21_MinInStack/test.h"
#        "SwordOffer/Q/4 Capter/23_PrintFromTopToBottom/PrintFromTopToBottom.cpp"
#        "SwordOffer/Q/4 Capter/23_PrintFromTopToBottom/test.cpp"
#        "SwordOffer/Q/4 Capter/24_SquenceOfBST/SquenceOfBST.cpp"
#        SwordOffer/Q/2.3DataStructure/06_ContructBinaryTree/test2.cpp
#        SwordOffer/Q/2.3DataStructure/07_QueueWithTwoStacks/test2.cpp
#        "SwordOffer/Q/4 Capter/24_SquenceOfBST/test.php.cpp"
#        "SwordOffer/Q/4 Capter/25_PathInTree/PathInTree.cpp"
#        "SwordOffer/Q/4 Capter/25_PathInTree/test.cpp"
#        "SwordOffer/Q/4 Capter/26_CopyComplexList/CopyComplexList.cpp"
#        "SwordOffer/Q/4 Capter/26_CopyComplexList/ComplexList.h"
#        "SwordOffer/Q/4 Capter/27_ConvertBinarySearchTree/ConvertBianrySearchTree.cpp"
#        "SwordOffer/Q/4 Capter/26_CopyComplexList/test.cpp"
#        "SwordOffer/Q/4 Capter/27_ConvertBinarySearchTree/test.cpp"
#        "SwordOffer/Q/4 Capter/28_StringPermutation/StringPermutation.cpp"
#        "SwordOffer/Q/5 Capter/29_MoreThanHalfNumber/MoreThanHalfNumber.cpp"
        data_struct&&algorithm/sort/QuickSort.h
#        SwordOffer/Q/2.3DataStructure/08_MinNumberInRotatedArray/test2.cpp
#        "SwordOffer/Q/5 Capter/29_MoreThanHalfNumber/test.cpp"
#        data_struct&&algorithm/sort/test.cpp
#        "SwordOffer/Q/5 Capter/30_KLeastNumbers/KLeastNumbers.cpp"
#        SwordOffer/Q/2.3DataStructure/09_Fibonacci/test.cpp
#        SwordOffer/Q/2.3DataStructure/10_NumberOf1InBinary/test2.cpp
#        "SwordOffer/Q/5 Capter/31_FindGreatestSumOfSubArray/FindGreatestSumOfSubArray.cpp"
#        data_struct&&algorithm/sort/test2.cpp
#        "SwordOffer/Q/5 Capter/29_MoreThanHalfNumber/test2.cpp"
#        "SwordOffer/Q/5 Capter/32_NumberOf1/NumberOf1.cpp"
#        "SwordOffer/Q/5 Capter/33_SortArrayForMinNumber/SortArrayForMinNumber.cpp"
#        "SwordOffer/Q/5 Capter/33_SortArrayForMinNumber/test.cpp"
#        "SwordOffer/Q/4 Capter/28_StringPermutation/test.cpp"
#        "SwordOffer/Q/5 Capter/34_UglyNumber/UgliyNumber.cpp"
#        "SwordOffer/Q/5 Capter/34_UglyNumber/test.php.cpp"
#        "SwordOffer/Q/4 Capter/28_StringPermutation/test2.cpp"
#        "SwordOffer/Q/5 Capter/33_SortArrayForMinNumber/test2.cpp"
#        "SwordOffer/Q/4 Capter/28_StringPermutation/test3.cpp"
#        "SwordOffer/Q/5 Capter/33_SortArrayForMinNumber/test3.cpp"
#        "SwordOffer/Q/5 Capter/35_FirstNotRepeatingChar/FirstNotRepeatingChar.cpp"
#        data_struct&&algorithm/sort/BubbleSort.cpp
#        data_struct&&algorithm/sort/MergeSort.cpp
#        "SwordOffer/Q/5 Capter/36_InversePairs/InverseParis.cpp"
#        "SwordOffer/Q/4 Capter/28_StringPermutation/test4.cpp"
#        "SwordOffer/Q/5 Capter/33_SortArrayForMinNumber/test4.cpp"
#        "SwordOffer/Q/5 Capter/37_FirstCommonNodeInLists/FirstCommonNoDeInLists.cpp"
#        "SwordOffer/Q/5 Capter/38_NumberOfK/NumberOfK.cpp"
#        "SwordOffer/Q/4 Capter/25_PathInTree/test2.cpp"
#        "SwordOffer/Q/5 Capter/39_1_TreeDepth/1_TreeDepth.cpp"
#        data_struct&&algorithm/search/BinarySearch.cpp
#        "SwordOffer/Q/6 Capter/40_NumbersAppearOnce/NumbersAppearOnce.cpp"
#        "SwordOffer/Q/6 Capter/41_NumbersWithSum/1_TwoNumbersWithSum.cpp"
#        "SwordOffer/Q/6 Capter/41_NumbersWithSum/2_ContinuesSquenceWithSum.cpp"
#        "SwordOffer/Q/6 Capter/39_1_TreeDepth/test.cpp"
#        "SwordOffer/Q/4 Capter/25_PathInTree/test3.cpp"
#        "SwordOffer/Q/4 Capter/28_StringPermutation/test5.cpp"
#        "SwordOffer/Q/5 Capter/33_SortArrayForMinNumber/test5.cpp"
#        "SwordOffer/Q/6 Capter/42_ReverseWordsInSentence/1_ReverseWordsSentence.cpp"
#        "SwordOffer/Q/6 Capter/42_ReverseWordsInSentence/2_LeftRotateString.cpp"
#        "SwordOffer/Q/6 Capter/43_DicesProbability/DicesProbability.cpp"
#        "SwordOffer/Q/6 Capter/44_ContinousCards/ContinuousCards.cpp"
#        "SwordOffer/Q/6 Capter/45_LastNumberInCircle/LastNumberInCircle.cpp"
#        "SwordOffer/Q/6 Capter/46_Accomulate/Accomulate.cpp"
#        "SwordOffer/Q/6 Capter/46_Accomulate/Accomulate2.cpp"
#        "SwordOffer/Q/6 Capter/47_AddTwoNumbers/AddTwoNumbers.cpp"
#        "SwordOffer/Q/6 Capter/48_SealedClass/SealedClass.cpp"
        "SwordOffer/Q/6 Capter/49_StringToInt/StringToInt.cpp")
