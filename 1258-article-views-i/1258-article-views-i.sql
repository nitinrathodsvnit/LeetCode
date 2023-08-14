# Write your MySQL query statement below

# SELECT DISTINCT author_id AS id FROM Views 
# WHERE author_id = viewer_id 
# ORDER BY id;

# GB by defalt in sorting order
SELECT author_id AS id FROM Views 
where author_id = viewer_id 
GROUP BY id
ORDER BY id;