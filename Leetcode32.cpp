// Pandas Students and Examinations

import pandas as pd

def students_and_examinations(students: pd.DataFrame, subjects: pd.DataFrame, examinations: pd.DataFrame) -> pd.DataFrame:
    # Create all possible combinations of student + subject (CROSS JOIN)
    students['key'] = 1
    subjects['key'] = 1
    full = pd.merge(students, subjects, on='key').drop(columns='key')

    # Count examinations for each (student_id, subject_name)
    exam_counts = examinations.groupby(['student_id', 'subject_name']).size().reset_index(name='attended_exams')

    # Merge counts with full table (missing counts become NaN ? fill with 0)
    result = pd.merge(full, exam_counts, on=['student_id', 'subject_name'], how='left')
    result['attended_exams'] = result['attended_exams'].fillna(0).astype(int)

    # Sort as required
    return result.sort_values(by=['student_id', 'subject_name']).reset_index(drop=True)
