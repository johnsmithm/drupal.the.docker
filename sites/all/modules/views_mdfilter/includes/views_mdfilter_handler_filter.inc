<?php
class views_mdfilter_handler_filter extends views_handler_filter {

  function admin_summary() { }
  function operator_form() { }
  function query() {
    $table = $this->ensure_my_table();
    $join = new views_join();
    $join->construct('views_mdfilter', $this->table_alias, 'nid', 'nid');
    $this->query->ensure_table('views_mdfilter', $this->relationship, $join);
    $this->query->add_where($this->options['group'], "views_mdfilter.clicks_left", 0, ">");
 }

}
