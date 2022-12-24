class Solution
{
public:
    struct pair_hash_int
    {
        inline std::size_t operator()(const std::pair<int, int> &v) const
        {
            return v.first * 31 + v.second;
        }
    };

    int findPairs(vector<int> &nums, int k)
    {
        int n = nums.size();

        unordered_set<pair<int, int>, pair_hash_int> pairs;

        sort(nums.begin(), nums.end());

        for (int i = 0, j = 1; i < n && j < n;)
        {
            if (nums[j] - nums[i] == k)
            {
                pairs.insert({nums[i], nums[j]});
                ++i, ++j;
            }
            else if (nums[j] - nums[i] < k)
            {
                ++j;
            }
            else
            {
                ++i;
                if (j == i)
                    ++j;
            }
        }

        return pairs.size();
    }
};

class Solution
{
public:
    int findPairs(vector<int> &nums, int k)
    {
        map<int, int> counter;

        for (const int &num : nums)
        {
            ++counter[num];
        }

        int ans = 0;

        // the key is sorted
        for (const pair<int, int> &p : counter)
        {
            if (k == 0)
            {
                if (p.second >= 2)
                    ++ans;
            }
            else
            {
                if (counter.find(p.first + k) != counter.end())
                {
                    ++ans;
                }
            }
        }

        return ans;
    }
};

class Solution
{
public:
    int findPairs(vector<int> &nums, int k)
    {
        unordered_map<int, int> counter;

        int ans = 0;

        for (const int &num : nums)
        {
            if (counter.find(num) == counter.end())
            {
                if (counter.find(num - k) != counter.end())
                    ++ans;
                if (counter.find(num + k) != counter.end())
                    ++ans;
            }
            else if (counter[num] == 1)
            {
                if (k == 0)
                    ++ans;
            }
            ++counter[num];
        }

        return ans;
    }
};
