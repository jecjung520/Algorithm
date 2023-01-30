# Pattern: Sliding Windows

When dealing with problems such as computation of subarrays in an array, conventionally two for loops would be used for brute force causing O(N^2) time complexity. However, whilst traversing the subarrays, the next subarray would contain overlapping elements from the previous subarray accessed. Therefore, for every subarrays, just remove previous unoverlapped elements and add new unoverlapped element. <br />
You may refer to the [intro.cc](google.com) for basic usage of Slding Windows algorithm.

## Problem Lists
