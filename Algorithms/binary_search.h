#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define all(x) x.begin(), x.end()
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;

int _binary_search(ll x, vll &vec) { // classic
  int l = 0, r = vec.size() - 1, mid;
  while(l <= r) {
    mid = l + (r - l)/2;
    if(vec[mid] == x) {
      return mid;
    } else if(vec[mid] < x) {
      l = mid + 1;
    } else {
      r = mid + 1;
    }
  }
  return -1;
}

int _lb(ll x, vll &vec) { //lower_bound
  int l = 0, r = vec.size() - 1, mid;
  while(l <= r) {
    mid = l + (r - l) / 2;
    if(vec[mid] < x) {
      l = mid + 1;
    } else {
      r = mid - 1;
    }
  }

  mid = l;
  while((mid < vec.size()) && (vec[mid] < x))
    mid++;
  if(mid == vec.size())
    return -1;
  else
    return mid;
}

int _ub(ll x, vll &vec) { // upper_bound
  int l = 0, r = vec.size() - 1, mid;
  while(l <= r) {
    mid = l + (r - l) / 2;
    if(vec[mid] <= x) {
      l = mid + 1;
    } else {
      r = mid - 1;
    }
  }

  mid = l;
  while((mid < vec.size()) && (vec[mid] <= x))
    mid++;
  if(mid == vec.size())
    return -1;
  else
    return mid;
}
