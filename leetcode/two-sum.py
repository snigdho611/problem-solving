class Solution:
    def twoSum(self, nums: list[int], target: int) -> list[int]:
        ans_list = []
        for i in range(0, len(nums)):
            for j in range(0, len(nums)):
                if nums[i] != nums[j]:
                    if nums[i] + nums[j] == target:
                        ans_list.append(i)
                        ans_list.append(j)
                        return (ans_list)


S = Solution();
print(S.twoSum([3,2,4], 6));