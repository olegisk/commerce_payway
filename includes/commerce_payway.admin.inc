<?php

function commerce_payway_capture_form($form, &$form_state, $order, $transaction) {
  $form = array();
  $payment_method = commerce_payment_method_instance_load($transaction->instance_id);
  $form_state['order'] = $order;
  $form_state['transaction'] = $transaction;
  $form_state['payment_method'] = $payment_method;
}


/**
 * Form callback for processing refunds.
 */
function commerce_payway_refund_form($form, &$form_state, $order, $transaction) {
  $form = array();
  $payment_method = commerce_payment_method_instance_load($transaction->instance_id);
  $form_state['order'] = $order;
  $form_state['transaction'] = $transaction;
  $form_state['payment_method'] = $payment_method;

  $form['amount'] = array(
    '#type' => 'textfield',
    '#title' => t('Refund amount'),
    '#description' => t('Enter amount to refund'),
    '#required' => TRUE,
    '#size' => 8,
  );

  $form['actions'] = array(
    '#type' => 'container',
  );

  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Process refund'),
  );

  $form['actions']['cancel'] = array(
    '#type' => 'button',
    '#value' => t('Cancel'),
  );
  return $form;
}

/**
 * Validation callback for submitting refunds to payment gateway
 */
function commerce_payway_refund_form_validate($form, &$form_state) {
  // @todo
}

/**
 * Submit callback for submitting refunds to ayment gateway
 */
function commerce_payway_refund_form_submit($form, &$form_state) {
  // @todo
}
