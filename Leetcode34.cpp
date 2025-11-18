// Sales Person

import pandas as pd

def sales_person(sales_person: pd.DataFrame, company: pd.DataFrame, orders: pd.DataFrame) -> pd.DataFrame:
    sales_company = sales_person.merge(company, how='cross')
    sales_company = sales_company[sales_company['name_y'] == "RED"]
    df = sales_company.merge(orders, how='right', on=['com_id', 'sales_id'])
    df = df.dropna()['name_x']  
    return sales_person[~sales_person['name'].isin(df)][['name']]
