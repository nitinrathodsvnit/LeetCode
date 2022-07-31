
    class NumArray
    {
        public:
            vector<int> st;
        int n;
        void buildTree(vector<int> &arr, int start_index, int start, int end)
        {
            if (start > end)
                return;
            if (start == end)
            {
                st[start_index] = arr[start];
                return;
            }
            int mid = (start + end) / 2;
            buildTree(arr, 2 *start_index + 1, start, mid);
            buildTree(arr, 2 *start_index + 2, mid + 1, end);

            st[start_index] = st[2 *start_index + 1] + st[2 *start_index + 2];
        }

        int Query(int qs, int qe, int start, int end, int start_index)
        {
            if (qs > end or qe < start)	//No Overlap
            {
                return 0;
            }
            if (qs <= start && qe >= end)
            {
                return st[start_index];
            }
           	// partial overlap
            int middle = start + (end - start) / 2;
            int leftsum = Query(qs, qe, start, middle, 2 *start_index + 1);
            int rightsum = Query(qs, qe, middle + 1, end, 2 *start_index + 2);

            return leftsum + rightsum;
        }
        void Update(int start_index, int start, int end, int pos, int newvalue)
        {
            if (start > pos or end < pos)	// no overlap
                return;

            if (start == end)	// total overlap
            {
                st[start_index] = newvalue;
                return;
            }

            int middle = (start + end) / 2;	// partial overlap
            Update(2 *start_index + 1, start, middle, pos, newvalue);	// left child
            Update(2 *start_index + 2, middle + 1, end, pos, newvalue);	// right child

            st[start_index] = st[2 *start_index + 1] + st[2 *start_index + 2];
        }
        NumArray(vector<int> &nums)
        {
            if (nums.size() == 0)
                return;
            n = nums.size();
            st.resize(4 *n, 0);	// Maximum size of a segment tree for an array of size n is 4n

            buildTree(nums, 0, 0, n - 1);
        }

        void update(int index, int val)
        {
            Update(0, 0, n - 1, index, val);
        }

        int sumRange(int left, int right)
        {
            return Query(left, right, 0, n - 1, 0);
        }
    };

    /**
     *Your NumArray object will be instantiated and called as such:
     *NumArray* obj = new NumArray(nums);
     *obj->update(index,val);
     *int param_2 = obj->sumRange(left,right);
     */