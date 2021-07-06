/*
Julia just finished conducting a coding contest, and she needs your help assembling the leaderboard! 
Write a query to print the respective hacker_id and name of hackers who achieved full scores for more than one challenge. 
Order your output in descending order by the total number of challenges in which the hacker earned a full score. 
If more than one hacker received full scores in same number of challenges, then sort them by ascending hacker_id.

Input Format

The following tables contain contest data:

Hackers: The hacker_id is the id of the hacker, and name is the name of the hacker. 

Difficulty: The difficult_level is the level of difficulty of the challenge, and score is the score of the challenge for the difficulty level. 

Challenges: The challenge_id is the id of the challenge, the hacker_id is the id of the hacker who created the challenge, and difficulty_level is the level of difficulty of the challenge. 

Submissions: The submission_id is the id of the submission, hacker_id is the id of the hacker who made the submission, challenge_id is the id of the challenge that the submission belongs to, and score is the score of the submission. 
*/




select s.hacker_id, h.name 
from submissions s, challenges c,  hackers h, difficulty d
where s.challenge_id = c.challenge_id 
and s.hacker_id = h.hacker_id
and c.difficulty_level = d.difficulty_level
/*to eliminate submissions that did not earn full score */ 
and d.score = s.score
/* further eliminate hackers who only had one full-score submission */ 
group by s.hacker_id, h.name 
having count(s.score) > 1
/* display by the order stated in the problem */ 
order by count(s.score) desc, s.hacker_id;