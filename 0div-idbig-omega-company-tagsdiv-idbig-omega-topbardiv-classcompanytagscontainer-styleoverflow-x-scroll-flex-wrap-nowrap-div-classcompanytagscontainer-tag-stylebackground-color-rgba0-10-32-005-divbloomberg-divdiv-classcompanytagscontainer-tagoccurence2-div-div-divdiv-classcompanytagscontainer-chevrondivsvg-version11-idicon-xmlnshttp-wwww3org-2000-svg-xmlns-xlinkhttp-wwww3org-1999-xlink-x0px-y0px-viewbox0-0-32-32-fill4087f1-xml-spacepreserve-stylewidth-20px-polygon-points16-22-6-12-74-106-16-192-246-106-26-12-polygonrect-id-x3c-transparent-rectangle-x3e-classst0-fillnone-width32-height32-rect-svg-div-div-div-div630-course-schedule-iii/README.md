<h2><a href="https://leetcode.com/problems/course-schedule-iii/"><div id="big-omega-company-tags"><div id="big-omega-topbar"><div class="companyTagsContainer" style="overflow-x: scroll; flex-wrap: nowrap;"><div class="companyTagsContainer--tag" style="background-color: rgba(0, 10, 32, 0.05);"><div>Bloomberg</div><div class="companyTagsContainer--tagOccurence">2</div></div></div><div class="companyTagsContainer--chevron"><div><svg version="1.1" id="icon" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" x="0px" y="0px" viewBox="0 0 32 32" fill="#4087F1" xml:space="preserve" style="width: 20px;"><polygon points="16,22 6,12 7.4,10.6 16,19.2 24.6,10.6 26,12 "></polygon><rect id="_x3C_Transparent_Rectangle_x3E_" class="st0" fill="none" width="32" height="32"></rect></svg></div></div></div></div>630. Course Schedule III</a></h2><h3>Hard</h3><hr><div><p>There are <code>n</code> different online courses numbered from <code>1</code> to <code>n</code>. You are given an array <code>courses</code> where <code>courses[i] = [duration<sub>i</sub>, lastDay<sub>i</sub>]</code> indicate that the <code>i<sup>th</sup></code> course should be taken <b>continuously</b> for <code>duration<sub>i</sub></code> days and must be finished before or on <code>lastDay<sub>i</sub></code>.</p>

<p>You will start on the <code>1<sup>st</sup></code> day and you cannot take two or more courses simultaneously.</p>

<p>Return <em>the maximum number of courses that you can take</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> courses = [[100,200],[200,1300],[1000,1250],[2000,3200]]
<strong>Output:</strong> 3
Explanation: 
There are totally 4 courses, but you can take 3 courses at most:
First, take the 1<sup>st</sup> course, it costs 100 days so you will finish it on the 100<sup>th</sup> day, and ready to take the next course on the 101<sup>st</sup> day.
Second, take the 3<sup>rd</sup> course, it costs 1000 days so you will finish it on the 1100<sup>th</sup> day, and ready to take the next course on the 1101<sup>st</sup> day. 
Third, take the 2<sup>nd</sup> course, it costs 200 days so you will finish it on the 1300<sup>th</sup> day. 
The 4<sup>th</sup> course cannot be taken now, since you will finish it on the 3300<sup>th</sup> day, which exceeds the closed date.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> courses = [[1,2]]
<strong>Output:</strong> 1
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre><strong>Input:</strong> courses = [[3,2],[4,3]]
<strong>Output:</strong> 0
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= courses.length &lt;= 10<sup>4</sup></code></li>
	<li><code>1 &lt;= duration<sub>i</sub>, lastDay<sub>i</sub> &lt;= 10<sup>4</sup></code></li>
</ul>
</div>