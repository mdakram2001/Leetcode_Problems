import pandas as pd

def nth_highest_salary(employee: pd.DataFrame, N: int) -> pd.DataFrame:
    # if N is not valid (0 or negative)
    if N <= 0:
        return pd.DataFrame({f"getNthHighestSalary({N})": [pd.NA]})

    salaries = employee['salary'].drop_duplicates().sort_values(ascending=False)

    if len(salaries) >= N:
        return pd.DataFrame({f"getNthHighestSalary({N})": [salaries.iloc[N - 1]]})
    else:
        return pd.DataFrame({f"getNthHighestSalary({N})": [pd.NA]})